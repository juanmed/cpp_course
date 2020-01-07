
/*

Para compilar

g++ c17.cpp

para ejecutar

./a.out

*/

#include<iostream>

using namespace std;

int main(){




	int x = 0;

	cout << "Curso C++\n";
	cout << "Clase 17 ciclo while\n" << endl;

	cout << "Metodo 1\n";
	while (x < 10){
		cout << "EL valor de x: " << x << endl;
		x++;
	}
	cout << endl;


	x = 0;
	cout << "Metodo 2\n";
	while (x++ < 10){
		cout << "El valor de x: " << x << endl;
	}


	x = 0;
	cout << "Metodo 3\n";
	while (++x < 10){
		cout << "El valor de x: " << x << endl;
	}


	return 0;
}