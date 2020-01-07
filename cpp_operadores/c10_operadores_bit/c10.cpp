/*

Para compilar

g++ c10.cpp -o c10.out

Para ejecutar

./c10.out

*/

#include <iostream>

using namespace std;

int main(){

	cout << "Curso C++\n";
	cout << "Clase 10 Operadores de Bit\n";

	int x = 12, y = 39;

	cout << " x & y: " << (x & y) << endl;
	cout << " x | y: " << (x | y) << endl;
	cout << " x ^ y: " << (x ^ x ^ y) << endl;

	cout << " true & true: " << (true & true) << endl;
	cout << " true | false: " << (true | false) << endl;
	cout << " false ^ false: " << (false ^ false) << endl;


}