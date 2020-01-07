/*

Para compilar

g++ c16.cpp

para ejecutar

./a.out

*/

/*

Para compilar

g++ c18.cpp

para ejecutar

./a.out

*/

#include <iostream>

using namespace std;

int main(){

	cout << "Curso C++" << endl;
	cout << "Clase 18 Ciclo FOR" << endl;

	int x = 0;

	cout << "Metodo 1" << endl;
	for(int x = 0; x <= 10; x = x +1){
		cout << " 5 x " << x << " = " << (5*x) << endl;
	}
	cout << "x: " << x << endl;

	cout << "Metodo 2" << endl;
	for(; ++x <= 20; ){
		cout << " 5 x " << x << " = " << (5*x) << endl;
	}
	cout << "x: " << x << endl;

	cout << "Metodo 3" << endl;
	for(long y = 0, x = 0; ++x <= 10; y = y*y){
		cout << "y*y" << " = " << (y) << endl;
		y++;
	}
	cout << "x: " << x << endl;	

	return 0;
}