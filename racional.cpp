#include "racional.h"
#include <string>
#include <sstream>
#include <cstdlib>
#include <iostream>

using std::cout;
using std::endl;
using std::string;
using std::stringstream;

racional::racional(int num, int den){
	simplificar(num, den);
	if(den < 0){
                den*=-1;
                num*=-1;
        }else if(den==0){
                throw "Math error";
        }

	numerador = num;
	denominador = den;
}

const racional& racional::operator =(const racional& r){
	numerador = r.numerador;
	denominador = r.denominador;
	return*this;
}
               
string racional::toString()const{
	stringstream ss;
	if(denominador == 1){
		ss<<numerador;
	}else if(numerador == 0){
		ss<<"0";
	}else if(numerador != denominador){
		ss<<numerador<<"/"<<denominador;
	}
	return ss.str();
}
                
const double  racional::toDouble()const{
	double retorno = numerador*1.0/denominador;
	return (retorno);
}
                
const racional racional::operator +(const racional& r){
	if(denominador == r.denominador){
		return racional(r.numerador + numerador, denominador);
	}else{
		return racional((r.numerador * denominador) + (numerador * r.denominador), denominador*r.denominador);
	}
}
                
                
                
const racional racional::operator -(const racional& r){
	if(denominador == r.denominador){
		return racional(numerador - r.numerador,denominador); 
	}else{
		return racional((numerador * r.denominador) - (r.numerador*denominador), denominador*r.denominador);
	}
}
                

const racional racional::operator *(const racional& r){
	return racional(numerador*r.numerador, denominador * r.denominador);
}

const racional racional::operator /(const racional& r){
	return racional(numerador * r.denominador, denominador*r.numerador);
}
 
               
void racional::simplificar(int& num, int& den){
	if(num == den){
		num = 1;
		den = 1;
	}else if(num < den){

	if(den %num == 0){
		den = den/num;
		num = 1;
	}else{
		for(int i = num-1; i >1; i--){
			
				if(num % i == 0 && den % i == 0){
					num = num / i;
					den = den / i;
					i++;
				}	
			
			}
		}
	}else if(den <num){
		if(num%den == 0){
			num = num/den;
			den = 1;
		}else{
			for(int i = den-1; i >1; i--){
                        
                                if(num % i == 0 && den % i == 0){
                                        num = num / i;
                                        den = den / i;
                                        i++;
                                }
                        
                	}
		}
	}					
}

bool racional::isPrime(int num){
	bool retorno = true;
	for(int i = 1; i < num; i++){
		if(num % i ==0){
			retorno = false;
		}
	}
	return retorno;	
}
