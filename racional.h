#pragma once 
#include <string>

using std::string;

class racional{
	int numerador;
	int denominador;

	public:
		racional(int, int);
		string toString()const;
		const double toDouble()const;
		const racional operator +(const racional&);
		const racional operator -(const racional&);
		const racional& operator =(const racional&);
		const racional operator *(const racional&);
		const racional operator /(const racional&);
		void simplificar(int&, int&);
		bool isPrime(int);


};
