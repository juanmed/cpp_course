/*

Para compilar

g++ c29.cpp

para ejecutar

./a.out


*/

#include <iostream>

using namespace std;

int sumar(int a, int b);

int main(){

	cout << "Curso C++" << endl;
	cout << "Clase 29 Funciones y return" << endl;

	int a = sumar(10,15);
	cout << "Suma: " << a << endl;

	return 0;


}

int sumar(int a, int b){
	return a + b;
}