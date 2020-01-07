/*

Para compilar

g++ c27.cpp

para ejecutar

./a.out

*/


#include <iostream>

using namespace std;

// Declarar una funcion
void imprimirTablaDel5();

int main(){

	cout << "Curso C++" << endl;
	cout << "Clase 27 Funciones" << endl;

	imprimirTablaDel5();

	return 0;
}

void imprimirTablaDel5(){

	int x = 0;
	for(; ++x <= 10; ){
		cout << " 5 x " << x << " = " << (5*x) << endl;
	}

}