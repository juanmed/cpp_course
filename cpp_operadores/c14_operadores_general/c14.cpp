/*

Para compilar

g++ c14.cpp

para ejecutar

./a.out

*/

#include <iostream>
#include <cstdlib>

#define PI 3.14159254


using namespace std;

int main(){

	cout << "Curso C++\n";
	cout << "Clase 14 Operadores de Proposito General\n";

	// Hay tres operadores: sizeof, ?:,  ','

	int x = 26, y = 25;
	float c = 20.1;

	//sizeof
	cout << "sizeof(x): " << sizeof(x) << endl;
	cout << "sizeof(PI): " << sizeof(PI) << endl;
	cout << "sizeof(y): " << sizeof(c) << endl;

	//?:

	//x > y ? cout << " x > y" : cout << " x !> y";
	cout << endl;

	//,

	x > y ? cout << "x > y\n" , cout << " x es mayor a y\n" : cout << "x !> y\n", cout << " x no es mayor a y\n";
	cout << endl; 


	while(1){
		(y>x) ? x++ : y++;
		cout << y << endl;
		if (y>x){
			break;
		}
		else{
		}


	// using ?: to decide which variable to assign a value
    srand(time(NULL));
    int a=0,b=0;
    ((rand()%2)?a:b)=5;
    cout << "A: " << a << "\nB: " << b << endl;
    cin.ignore();
    return 0;


	}


	return 0;
}
