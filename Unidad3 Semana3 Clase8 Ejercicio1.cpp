#include <iostream>
#include<vector>

using namespace std;

int main(){
	vector<string> value{"\n\tAnimal: perro", "\n\tEdad: 5", "\n\tAltura: 0.75", "\n\tNombre: Firulais"};
	
	
	cout<<"Hacer un programa en C++ para recorrer los valores del array con un foreach imprimiendo:\n";
	for (auto v : value)
	cout<<v<<" ";
	return 0;
}
