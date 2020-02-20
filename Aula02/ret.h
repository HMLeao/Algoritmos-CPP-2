/*
 * ret.h
 *
 *  Created on: 14 de fev de 2020
 *      Author: IFPE
 */

#ifndef RET_H_
#define RET_H_

#include <iostream>

using namespace std;

class Retangulo {
private:
	int altura;
	int largura;

public:
	Retangulo(int alt, int lar) : altura(alt), largura(lar) {
		cout << "Retangulo criado!" << endl;

	}

	~Retangulo() {
		cout << "Retangulo destruido!" << endl;
	}

	int area();

	int perimetro();

	int getAltura() { return this->altura; }
	int getLargura() { return this->largura; }
};



#endif /* RET_H_ */
