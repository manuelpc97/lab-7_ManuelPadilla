#pragma once 
#include <string>
#include <iostream>

using std::ostream;
using std::istream;

using std::string;

class racional{
	int numerador;
	int denominador;

	public:
		racional(int, int);
		const double toDouble()const;
		const racional operator +(const racional&);
		const racional operator -(const racional&);
		const racional& operator =(const racional&);
		const racional operator *(const racional&);
		const racional operator /(const racional&);
		void simplificar(int&, int&);
		bool isPrime(int);
		friend ostream& operator<<(ostream&, const racional&);	
};


