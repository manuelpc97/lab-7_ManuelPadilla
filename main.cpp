#include "racional.h"
#include <iostream>
#include <string>
#include <vector>

using std::vector;
using std::endl;
using std::cout;
using std::cin;
using std::string;

void mostrarRacionales(vector<racional>& );

int main(int argc, char*argv[]){
	vector <racional> racionales;
	vector <string> historial;
	racional fraccion(1,1);
	bool seguir = true;
	int decision = 0;
	int numerador = 0, denominador = 0;
	
	while(seguir){
		cout<<"------------------Menu-------------------"<<endl;
		cout<<"1. Crear racionales. "<<endl;
		cout<<"2. Sumar racionales. "<<endl;
		cout<<"3. Restar reacionales. " <<endl;
		cout<<"4. Multiplicar Racionales"<<endl;
		cout<<"5. Dividir racionales"<<endl;
		cout<<"6. Asignar racionales"<<endl;
		cout<<"7. Salir"<<endl;
		cin>>decision;

		if(decision ==1){
			while(denominador == 0){
				cout<<"Ingrese el numerador: ";
				cin>>numerador;
				cout<<"Ingrese el denominador: ";
				cin>>denominador;
				
				if(denominador == 0){
					cout<<"ERROR! Su denominador no puede ser cero"<<endl;
					cout<<"Ingrese todos los datos de nuevo "<<endl;
				}else{
					fraccion = racional(numerador,denominador);
					racionales.push_back(fraccion);									
				}		
			}
			denominador = 0;		
		}else if(decision == 2){
			mostrarRacionales(racionales);
		}else if(decision == 3){
		
		}else if(decision == 4){

		}else if(decision == 5){

		}else if(decision == 6){

		}else if(decision == 7){

		}
	}
		
	return 0;
}

void mostrarRacionales(vector<racional>& lista){
	for(int i = 0; i < lista.size(); i++){
		cout<<"Posicion: "<< i <<lista[i].toString()<<endl;
	}
}

