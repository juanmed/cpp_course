/*

Para compilar

g++ c15.cpp

para ejecutar

./a.out

*/

#include <iostream>

using namespace std;

int main(){

	cout << "Curso C++";
	cout << "Clase 15 Operadores CAST" << endl;

	int x;
	float a;
	cout << "x : " << x << endl;
	cout << "a : " << a << endl;
	cout << "x + a: " << (x + a) << endl;
	cout << endl;
	cout << "x + true: " << (x + true) << endl;

	x = (int) 12.5;
	a = (float) 3;

	cout << "x : " << x << endl;
	cout << "a : " << a << endl;	


	return 0;

}