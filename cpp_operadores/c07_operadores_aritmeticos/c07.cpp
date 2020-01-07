/*

Para compilar

g++ c07.cpp -o c07.out

Para ejecutar

./c07.out

*/

#include <iostream>

using namespace std;

int main(){
	int a = 10, b = 20;
	float c = 15.1, d = 13.2;

	cout << "Curso C++" << endl;
	cout << "Clase 07 Operaciones Aritmeticas" << endl;

	cout << " a + b: " << a + b << endl;
	cout << " a - b: " << a - b << endl;
	cout << " a * b: " << a * b << endl;
	cout << " a / b: " << a / b << endl;
	cout << " a % b: " << a % b << endl;
	cout << " a++: " << a++ << endl;
	cout << " ++a: " << ++a << endl;

	cout << " a + c: " << a + c << endl;
	cout << " a / c: " << a / c << endl;
	//cout << " c % a: " << c % a << endl;

	return 0;

}