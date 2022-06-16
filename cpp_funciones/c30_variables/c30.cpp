/*

Para compilar

g++ c30.cpp

para ejecutar

./a.out


*/

#include <iostream>

using namespace std;

int a = 10;

int returnF();

int main(){

	cout << "Curso C++" << endl;
	cout << "Clase 30 Variables Globales y Locales" << endl;

	int a = 20; 

	cout << "main local a before F: " << a << endl;


	returnF();

	cout << "main local a after F: " << a << endl;

	cout << "Function F: " << returnF << endl;
	
	return 0;
}

int returnF(){
	cout << "Global a: " << a << endl;
	a = 45;
	cout << "Global a: " << a << endl;	
	return 0;
}