/*
 * main.cpp
 *
 *  Created on: 14 de fev de 2020
 *      Author: IFPE
 */
#include <iostream>

#include "ret.h"

using namespace std;



void swap(int &x, int &y) {
	int tmp = x;
	x = y;
	y= tmp;
}

int main() {

	int l, a;

	int &ref = l;

	cin >> ref >> a;

	cout << "l:" << l << " a:" << a << endl;
	swap(l, a);
	cout << "l:" << l << " a:" << a << endl;

	Retangulo r1(a, l);

	Retangulo * r2 = new Retangulo(5, 15);

	cout << "Retangulo 1:" << endl;
	cout << "Area: " << r1.area() << endl;
	cout << "Perimetro: " << r1.perimetro() << endl;

	cout << "Retangulo 2:" << endl;
	cout << "Area: " << r2->area() << endl;
	cout << "Perimetro: " << r2->perimetro() << endl;

	delete r2;

	return 0;
}


