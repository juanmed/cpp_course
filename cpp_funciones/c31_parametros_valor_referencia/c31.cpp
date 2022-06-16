#include <iostream>

using namespace std;


float recibirVal(int val){
	val = val + 3.1415;
	return val;
}

void recibirRef(float &ref){
	ref += 3.1415;
}

int parametrosDefault(int a=2, int b=10){
	return a + b;
}

float* recibirPuntero(float *a){
	cout << "Recibi direccion: " << a << endl;
	*a = 20;
	return a;
}

int main(){

	cout << "Curso C++" << endl;
	cout << "Clase 31 - 33 Parametros por valor, referencia, puntero y \n valores por defecto" << endl;

	float energy = 5.5; //J

	cout << "Valor inicial: " << energy << endl;
	recibirVal(energy);
	cout << "Despues de pasar variable por valor: " << energy << endl;
	recibirRef(energy);
	cout << "Despues de pasar variable por referencia: " << energy << endl;
	recibirPuntero(&energy);
	cout << "Despues de pasar variable por referencia: " << energy << endl;

	cout << "Resultado con 1 solo parametro: " << parametrosDefault(5) << endl;
	cout << "Resultado con 2 parametros: " << parametrosDefault(5,1) << endl;
	cout << "Resultado sin parametros: " << parametrosDefault() << endl;

	//cout << "Direccion de funcion: " << recibirPuntero << endl;
	return 0;

}