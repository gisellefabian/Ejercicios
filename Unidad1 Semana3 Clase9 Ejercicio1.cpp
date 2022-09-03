#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

int main ()
	{
	array< int, 3 > arreglo1; //arreglo1 es un arreglo de 5 valores int
	array< int, 3 > arreglo2; //arreglo2 es un arreglo de 5 valores int
	//for para guardar los valores ingresados en el arreglo1
	for ( size_t i = 0; i < arreglo1.size(); ++i ){
		cout << "Arreglo 1 Ingrese un numero: ";
		cin >> arreglo1[i];
    }
    	//for para guardar los valores ingresados en el arreglo2
	for ( size_t j = 0; j < arreglo1.size(); ++j ){
		cout << "Arreglo 2 Ingrese un numero: ";
		cin >> arreglo2[j];
	}
	
	 cout << "\nSuma" << endl;
     cout << "Elemento" << setw ( 13 ) << "Arreglo1" << setw ( 10 ) << "Arreglo2" << setw(10) << "Suma" <<endl;
	//for para sumar los valores ingresados en el arreglo1 y arreglo2
	for ( size_t j = 0; j < arreglo1.size(); ++j ){
		cout << setw( 7 ) << j << setw( 13 ) << arreglo1[ j ] << setw(10) << arreglo2[ j ]
		<< setw ( 10 ) << arreglo1[ j ]+arreglo2[ j ] << endl;
	}
	 cout << "\nResta" << endl;
     cout << "Elemento" << setw ( 13 ) << "Arreglo1" << setw ( 10 ) << "Arreglo2" << setw(10) << "Resta" << endl;
	//for para restar los valores ingresados en el arreglo1 y arreglo2
	for ( size_t j = 0; j < arreglo1.size(); ++j ){
		cout << setw( 7 ) << j << setw( 13 ) << arreglo1[ j ] << setw(10) << arreglo2[ j ]
		<< setw ( 10 ) << arreglo1[ j ]-arreglo2[ j ] << endl;
	}
	cout << "\nMultiplicacion" << endl;
     cout << "Elemento" << setw ( 13 ) << "Arreglo1" << setw ( 10 ) << "Arreglo2" << setw(10) << " Multiplicacion" << endl;
	//for para multiplicar los valores ingresados en el arreglo1 y arreglo2
	for ( size_t j = 0; j < arreglo1.size(); ++j ){
		cout << setw( 7 ) << j << setw( 13 ) << arreglo1[ j ] << setw(10) << arreglo2[ j ]
		<< setw ( 10 ) << arreglo1[ j ]*arreglo2[ j ] << endl;
	}
	cout << "\nDivision" << endl;
     cout << "Elemento" << setw ( 13 ) << "Arreglo1" << setw ( 10 ) << "Arreglo2" << setw(10) << "Division" << endl;
	//for para dividir los valores ingresados en el arreglo1 y arreglo2
	for ( size_t j = 0; j < arreglo1.size(); ++j ){
		cout << setw( 7 ) << j << setw( 13 ) << arreglo1[ j ] << setw(10) << arreglo2[ j ]
		<< setw ( 10 ) << arreglo1[ j ]/arreglo2[ j ] << endl;
	}
}
