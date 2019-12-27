/*
Para compilar

g++ c04.cpp -o c04.out

para ejecutar

./c04.out

*/

#include <iostream>

using namespace std;	

int main()
{
	
	cout << "Curso C++\n";
	cout << "Literales\n";


	cout << "false: " << false << endl;	
	cout << "true:" << true << endl;

	cout << "Decimal 19: " << 19 << endl;
	cout << "Octal 023: " << 023 << endl;
	cout << "Hexadecimal 0x13: " << 0x13 << endl;

	cout << "Desplegando punto flotante\n";
	cout << 3.141592 << endl;
	cout << 3.141592e3 << endl;
	cout << 314.16e-2 << endl;
	cout << 0.16 << endl;
	cout << .16 << endl;

	cout << "Desplegando Literales Caracter\n" << endl;
	cout << "Literal caracter x: " << 'x' << endl;
	cout << "Literal diagonal invertida \\: " << '\\' << endl;
	cout << "Literal comilla simple: " << '\'' << endl;
	cout << "Literal backspace: " << '\b' << "Hola " << endl;
	cout << "Literal Tab: " << '\t' << "Hola" << endl;
	cout << "Literal Carriage Return" << '\r' << "Hola" << endl;


	return 0;
}