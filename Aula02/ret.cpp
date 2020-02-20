/*
 * ret.cpp
 *
 *  Created on: 14 de fev de 2020
 *      Author: IFPE
 */

#include "ret.h"


int Retangulo::area() {
	return largura * altura;
}

int Retangulo::perimetro() {
	return 2 * (largura + altura);
}
