#include <iostream>
using namespace std;

int main(){
	string contra, contra2;
	
	cout << "Ingrese su contrasena: " << endl;
	cin >> contra;
	
	cout << "Ingrese nuevamente su contrasena: " << endl;
	cin >> contra2;
	
	while ( contra != contra2){
	cout << "\n\nError! Las contrasenas no coinciden. Intentelo de nuevo." << endl;

		cout << "\nIngrese su contrasena: " << endl;
		cin >> contra;
	
		cout << "Ingrese nuevamente su contrasena: " << endl;
		cin >> contra2;	
	
	}
	cout << "\n\nInicio de sesion exitoso." ;
}
