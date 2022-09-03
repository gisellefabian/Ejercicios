#include <iostream>
using namespace std;

int main(){
	
	double peso, estatura, imc;
	
	do{
		cout <<"Ingrese el peso en kg: ";	
		cin >> peso;
	}
	while (peso<5 || peso>300);

	do{
		cout <<"Ingrese la estatura en m: ";
		cin >> estatura;			
	}
	while (estatura<1 || estatura>2);
	
	imc=peso/(estatura*estatura);
	
	if(imc<16){
		cout << "Su imc es de "<<imc<< " y corresponde a ingrapeso: delgadez severa."<<endl;
	}
	else if (imc>=16 && imc<=16.99){
		cout << "Su imc es de "<<imc<< " y corresponde a infrapeso: delgadez moderada."<<endl;
	}
	else if (imc>=17 && imc<=18.49){
		cout << "Su imc es de "<<imc<< " y corresponde a infrapeso: delgadez aceptable."<<endl;
	}
	else if (imc>=18.5 && imc<=24.99){
		cout << "Su imc es de "<<imc<< " y corresponde a peso normal."<<endl;
	}
	else if (imc>=25 && imc<=29.99){
		cout << "Su imc es de "<<imc<< " y corresponde a sobrepeso."<<endl;
	}
	else if (imc>=30 && imc<=34.99){
		cout << "Su imc es de "<<imc<< " y corresponde a obeso: tipo I."<<endl;
	}
	else if (imc>=35 && imc<=40){
		cout << "Su imc es de "<<imc<< " y corresponde a obeso: tipo II."<<endl;
	}
	else if (imc>40){
		cout << "Su imc es de "<<imc<< " y corresponde a obeso: tipo III."<<endl;
	}
}
