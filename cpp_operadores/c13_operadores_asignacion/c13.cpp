/*

Para compilar

g++ c13.cpp

para ejecutar

./a.out

*/

#include <iostream>

using namespace std;

int main(){

	cout << "Curso C++";
	cout << "Clase 13 Operadores de asignacion";

	unsigned int x = 15;

	cout << "x += 10 : " << (x += 10) << endl;
	cout << "x -= 10 : " << (x -= 10) << endl;
	cout << "x *= 10 : " << (x *= 10) << endl;
	cout << "x /= 10 : " << (x /= 10) << endl;
	cout << "x %= 10 : " << (x %= 10) << endl;
	cout << "x <<= 10 : " << (x <<= 2) << endl;
	cout << "x >>= 10 : " << (x >>= 2) << endl;
	cout << "x &= 10 : " << (x &= 10) << endl;
	cout << "x |= 10 : " << (x |= 10) << endl;
	cout << "x ^= 10 : " << (++x ^= 10) << endl;
	cout << "x  : " << (x) << endl;

}