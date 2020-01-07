/*

Para compilar

g++ c08.cpp -o c08.out

Para ejecutar

./c08.out

*/

#include <iostream>

using namespace std;

int main(){

	cout << "Curso C++\n";
	cout << "Clase 08 Operadores aritmeticos\n";

	unsigned short int x = 10, y = 20;
	short int a = -10;
	int b = -10;
	float c = -10.0;

	cout << "Variables x: " << x << endl;
	cout << "Variables y: " << y << endl;
	cout << "Variables a: " << a << endl;
	cout << "Variables c: " << c << endl;
	cout << sizeof(unsigned short int) << endl;

	cout << "x > y " << (x > y) << endl;
	cout << "x < y " << (x < y) << endl;
	cout << "x == y " << (x == y) << endl;
	cout << "x != y " << (x != y) << endl;
	cout << "a > x " << (a > x) << endl;
	cout << "a < y " << (a < y) << endl;
	cout << "a == b " << (a == b) << endl;
	cout << "c == a " << (c == a) << endl;
	//cout << ""

	return 0;
}

