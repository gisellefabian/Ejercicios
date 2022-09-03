#include <iostream>
using namespace std;

int main(){
	double nota1, nota2, nota3, prom;
	cout <<"Ingrese la primera nota: ";
	cin >> nota1;
	cout <<"Ingrese la segunda nota: ";
	cin >> nota2;
	cout <<"Ingrese la tercera nota: ";	
	cin >> nota3;	
	
	prom=(nota1 + nota2 + nota3)/3;
	
	if(prom>=7){
		cout << "Promocionado"<<endl;
	}
	else if (prom>=4){
		cout << "Regular"<<endl;
	}else{
		cout << "Reprobado"<<endl;
	}
}
