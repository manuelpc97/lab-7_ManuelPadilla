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
		const racional suma(const racional&);
		const racional& add(const racional&);
		const racional minus()const;
		const racional resta(const racional&);
		const racional& sub(const racional&);
		const racional& assign(const racional&);
		const racional multi(const racional&);
		const racional& product(const racional&);
		const racional division(const racional&);
		const racional& cociente(const racional&);
		void simplificar(int&, int&);
		bool isPrime(int);


};
