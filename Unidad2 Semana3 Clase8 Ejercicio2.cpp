#include <iostream>
using namespace std;

string posneg(int num); 

int main(){
	int numero;
	string cadena;
	cout <<"Ingrese el numero: ";
	cin >> numero;
	cadena = posneg(numero);
	cout << "El numero es: "<< cadena;
	return 0;
}

string posneg(int num){
	string resultado;
	if (num>0){
		resultado = "positivo";
	}else if (num<0){
		resultado = "negativo";
	}
	return resultado;
}
