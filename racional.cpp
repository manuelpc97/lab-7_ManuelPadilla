#include "racional.h"
#include <string>
#include <sstream>
#include <cstdlib>
#include <iostream>

using std::ostream;
using std::istream;
using std::cout;
using std::endl;
using std::string;
using std::stringstream;

racional::racional(int num, int den){
	
	if(den < 0){
                den*=-1;
                num*=-1;
        }
	if(num!=0){
		simplificar(num,den);
	}

	numerador = num;
	denominador = den;
}

bool racional::operator!=(int num){
	if((numerador!=0)){
		return true;
	}else{
		return false;
	}
}
const racional& racional::operator =(const racional& r){
	numerador = r.numerador;
	denominador = r.denominador;
	return*this;
}
               
ostream& operator<<(ostream& output, const racional& rac){
	if(rac.denominador == 1){
		output<<rac.numerador;
	}else if(rac.numerador == 0){
		output<<"0";
	}else if(rac.numerador != rac.denominador){
		output<<rac.numerador<<"/"<<rac.denominador;
	}
	return output;
}

                
const double  racional::toDouble()const{
	double retorno = numerador*1.0/denominador;
	return (retorno);
}
                
const racional racional::operator +(const racional& r){
	int num, den;
	if(denominador == r.denominador){
		num = r.numerador + numerador;
		den = denominador;
//		simplificar(num,den);
		return racional(num, den);
	}else{
		num = (r.numerador * denominador) + (numerador * r.denominador);
		den = denominador*r.denominador;
//		simplificar(num, den);
		return racional(num, den);
	}
}
                
                
                
const racional racional::operator -(const racional& r){
	int num, den;
	if(denominador == r.denominador){
		num = numerador - r.numerador;
		den = denominador;
//		simplificar(num,den);
		return racional(num,den); 
	}else{
		num = (numerador * r.denominador) - (r.numerador*denominador);
		den = denominador*r.denominador;
//		simplificar(num,den);
		return racional(num, den);
	}
}
                

const racional racional::operator *(const racional& r){
	int num, den;
	num = numerador * r.numerador;
	den = denominador * r.denominador;
//	simplificar(num,den);
	return racional(num, den);
}

const racional racional::operator /(const racional& r){
	int num, den;
	num = numerador * r.denominador;
	den = denominador * r.numerador;
//	simplificar(num,den);
	return racional(num, den);
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
		int num2;
		if(num < 0){
			num2 = num *-1;
		}else{
			num2 = num;
		}			
		for(int i = num2-1; i >1; i--){
				if(num2 % i == 0 && den % i == 0){
					num2 = num2 / i;
					den = den / i;
					i++;
				}	
			}
			if(num < 0){
				num2*=-1;
				num = num2;
			}else{
				num = num2;
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
