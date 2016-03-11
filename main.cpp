#include "racional.h"
#include <iostream>
#include <string>

using std::endl;
using std::cout;
using std::cin;
using std::string;

int main(int argc, char*argv[]){
	racional uno(5,7);
	cout << uno.toString() << endl;
	racional dos(46,6);
	cout << dos.toString() << endl;
	racional tres(42,12);
	cout << tres.toString() << endl;
	racional suma(1,1);
	racional resta(1, 1);
	racional multi(1,1);
	racional divi(1,1);
	double real;
	        
	real = dos.toDouble();
	cout << "Numero real: " << real << endl;

	suma.assign(uno.suma(dos));
	multi.assign(uno.multi(dos));
	divi.assign(dos.division(tres));			
	resta.assign(tres.resta(dos));
	dos.add(tres);
	uno.assign(uno.minus());

	cout <<"Suma: "<< suma.toString() <<endl;
	cout << "dos: " << dos.toString() <<endl;
	cout << "uno: " << uno.toString() <<endl;
	cout << "Resta: " << resta.toString() << endl;
	cout << "Multi: "<< multi.toString()<<endl;
	cout << "Divi: "<<divi.toString()<<endl;
	return 0;
}
