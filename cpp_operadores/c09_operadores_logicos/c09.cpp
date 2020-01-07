/*

Para compilar

g++ c09.cpp -o c09.out

Para ejecutar

./c09.out

*/

/*

Operadores logicos permiten evaluar mas de una condicion
Sus operandos deben ser bool, es decir, solo true o false

*/

#include <iostream>

using namespace std;

int main(){

	cout << "Curso C++\n";
	cout << "Clase 09 Operadores Logicos\n";

	cout << "true && true: " << (true && true) << endl;

	cout << "false || true: " << (false || true) << endl;

	cout << "!true " << (!true) << endl;
	cout << "!false " << (!false) << endl;

	// true = 1 o cualquier valor no igual a cero (0)

	cout << " 5 && 5 " << (5 && 5) << endl;
	cout << " -5 && -5 " << (-5 && -5) << endl;
	cout << " 1.5 && 1.6 " << (1.5 && 1.6) << endl;
}