/*

Para compilar

g++ c17.cpp

para ejecutar

./a.out

*/

#include<iostream>

using namespace std;

void desplegarTableDelX(int n){
	cout << "Tabla del " << n << endl;
	for(int i = 0; i <=10 ; i++){
		cout << n << " x " << i << " : " << (n * i) << endl;
	}
	cout << endl;
}



int main(){

	cout << "Curso C++" << endl;
	cout << "Clase 28 Funciones con Parametros" << endl;

	desplegarTableDelX(5);
	desplegarTableDelX(7);

	cout << endl;
}