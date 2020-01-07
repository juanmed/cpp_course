#include <iostream>

using namespace std;

/*
Para compilar

g++ c05.cpp -o c05.out

para ejecutar

./c05.out

*/

int main(){

	int edad = 34, id = 3;
	float peso = 134.5, estatura = 1.75; // lbs, m
	wchar_t strange = '\u00BE';
	string strange2 = "\u00BE";
	bool salida = true; 
	
	cout << "Curso C++\n";
	cout << "Clase 05 Declarando variables" << endl << endl;

	cout << "Desplegar variables" << endl;
	cout << "Edad: " << edad << endl;
	cout << "Id: " << id << endl;
	cout << "Peso: " << peso << endl;
	cout << "Estatura: " << estatura << endl;
	cout << "Caracter: " << strange << endl;
	cout << "Caracter2: " << strange2 << endl;
	cout << "Salida: " << salida << endl;

	cout << "Peso + Estatura: " << peso + estatura << endl;

}