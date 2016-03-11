#include "racional.h"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using std::stringstream;
using std::vector;
using std::endl;
using std::cout;
using std::cin;
using std::string;

void mostrarRacionales(vector<racional>& );
void mostrarHistorial(vector<string>&);

int main(int argc, char*argv[]){
	vector <racional> racionales;
	vector <string> historial;
	racional fraccion(1,1);
	bool seguir = true;
	int posicion1, posicion2;
	int decision = 0;
	int numerador = 0, denominador = 0;
	
	while(seguir){
		cout<<"------------------Menu-------------------"<<endl;
		cout<<"1. Crear racionales. "<<endl;
		cout<<"2. Sumar racionales. "<<endl;
		cout<<"3. Restar reacionales. " <<endl;
		cout<<"4. Multiplicar Racionales"<<endl;
		cout<<"5. Dividir racionales"<<endl;
		cout<<"6. Mostar racionales"<<endl;
		cout<<"7. Salir"<<endl;
		cin>>decision;

		if(decision ==1){
				cout<<"Ingrese el numerador: ";
				cin>>numerador;
				cout<<"Ingrese el denominador: ";
				cin>>denominador;
				
				if(denominador == 0){
					cout<<"ERROR! Su denominador no puede ser cero"<<endl;
					cout<<"aSu denominador sera 1"<<endl;
					denominador = 1;
				}

				fraccion = racional(numerador,denominador);
				racionales.push_back(fraccion);									
						
					
		}else if(decision == 2){
			cout<<"***************SUMA***********************"<<endl;
			stringstream ss;
			mostrarRacionales(racionales);

			cout<<"Ingrese la posicion de su primera fraccion: ";
			cin>>posicion1;
			cout<<"Ingrese la posicion de su segunda fraccion: ";
			cin>>posicion2;

			if(posicion1 < 0 || posicion1 >= racionales.size()){
				cout<<"Su primera posicion no existe. "<<endl;
			}else if(posicion2 < 0 || posicion2 >= racionales.size()){
				cout << "Su segunda posicion no existe."<<endl;
			}else{
				fraccion = racionales[posicion1] + racionales[posicion2];
				cout<<"La respuesta es: "<< fraccion<<endl;
				ss<<racionales[posicion1]<<" + "<< racionales[posicion2] << " = "<< fraccion;
				historial.push_back(ss.str());
									
			}
			
		}else if(decision == 3){
			cout<<"*************RESTA**********"<<endl;
			stringstream ss;
                        mostrarRacionales(racionales);
                        
                        cout<<"Ingrese la posicion de su primera fraccion: ";
                        cin>>posicion1;
                        cout<<"Ingrese la posicion de su segunda fraccion: ";
                        cin>>posicion2;

                        if(posicion1 < 0 || posicion1 >= racionales.size()){
                                cout<<"Su primera posicion no existe. "<<endl;
                        }else if(posicion2 < 0 || posicion2 >= racionales.size()){
                                cout << "Su segunda posicion no existe."<<endl;
                        }else{
                                fraccion = racionales[posicion1] - racionales[posicion2];
                                cout<<"La respuesta es: "<< fraccion<<endl;
                                ss<<racionales[posicion1]<<" - "<<racionales[posicion2]<< " = "<< fraccion;
                                historial.push_back(ss.str());        
                        }
                       
		}else if(decision == 4){
			cout<<"***********MULTIPLICACION*****************"<<endl;
			stringstream ss;
                        mostrarRacionales(racionales);
                        
                        cout<<"Ingrese la posicion de su primera fraccion: ";
                        cin>>posicion1;
                        cout<<"Ingrese la posicion de su segunda fraccion: ";
                        cin>>posicion2;

                        if(posicion1 < 0 || posicion1 >= racionales.size()){
                                cout<<"Su primera posicion no existe. "<<endl;
                        }else if(posicion2 < 0 || posicion2 >= racionales.size()){
                                cout << "Su segunda posicion no existe."<<endl;
                        }else{
                                fraccion = racionales[posicion1] * racionales[posicion2];
                                cout<<"La respuesta es: "<< fraccion<<endl;
                                ss<<racionales[posicion1]<<" * "<<racionales[posicion2]<< " = "<< fraccion;
                                historial.push_back(ss.str());
                        }
                        
			
		}else if(decision == 5){
			cout<<"****************DIVISION************************"<<endl;
			stringstream ss;
                        mostrarRacionales(racionales);
                       
                        cout<<"Ingrese la posicion de su primera fraccion: ";
                        cin>>posicion1;
                        cout<<"Ingrese la posicion de su segunda fraccion: ";
                        cin>>posicion2;

                        if(posicion1 < 0 || posicion1 >= racionales.size()){
                                cout<<"Su primera posicion no existe. "<<endl;
                        }else if(posicion2 < 0 || posicion2 >= racionales.size()){
                                cout << "Su segunda posicion no existe."<<endl;
                        }else{
                                fraccion = racionales[posicion1] / racionales[posicion2];
                                cout<<"La respuesta es: "<< fraccion<<endl;
                                ss<<racionales[posicion1]<<" / "<<racionales[posicion2]<< " = "<< fraccion;
                                historial.push_back(ss.str());
                        }
                       
			
		}else if(decision == 6){
			cout<<"********************HISTORIAL*************************"<<endl;
			mostrarHistorial(historial);
		}else if(decision == 7){
			seguir = false;
		}
	}
		
	return 0;
}

void mostrarRacionales(vector<racional>& lista){
	for(int i = 0; i < lista.size(); i++){
		cout<<"Posicion: "<< i << " : "<<lista[i]<<endl;
	}
}

void mostrarHistorial(vector<string>& historial){
	for(int i = 0; i < historial.size(); i++){
		cout<<historial[i]<<endl;
	}
}
