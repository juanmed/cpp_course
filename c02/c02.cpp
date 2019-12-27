/*
Para compilar

g++ c02.cpp -o c02.out

para ejecutar

./co2.out
*/

#include <iostream>

using namespace std;

int main(){

	cout << "Curso C++ \n";
	cout << "Clase 02 - Variables y Tipos de Datos \n";

	cout << "Tamano de char: " << sizeof(char) << endl;
	cout << "Tamano de int: " << sizeof(int) << endl;
	cout << "Tamano de short int: " << sizeof(short int) << endl;
	cout << "Tamano de long int : " << sizeof(long int) << endl;
	cout << "Tamano de float: " << sizeof(float) << endl;
	cout << "Tamano de double: " << sizeof(double) << endl;
	cout << "Tamano de long double: " << sizeof(long double) << endl;
	cout << "Tamano de wchar_t: " << sizeof(wchar_t) << endl;

	return 0;
}