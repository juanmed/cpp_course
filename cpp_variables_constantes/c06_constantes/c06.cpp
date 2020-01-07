#include <iostream>

#define CAMBIO_LINEA "\n"
#define EOL ;
#define DESPLIEGA cout
#define FINALIZA return 0

const int INT_EDAD = 33;


using namespace std;

int main()
{

	cout << "Curso de C++\n"EOL
	DESPLIEGA << "Clase 06 - Constantes\n" << endl EOL

	DESPLIEGA << "sizeof(INT_EDAD): " << sizeof(INT_EDAD) << endl;
	DESPLIEGA << "sizeof(EOL): " << sizeof(DESPLIEGA) << endl;

	//INT_EDAD = 30;

	FINALIZA;
}

