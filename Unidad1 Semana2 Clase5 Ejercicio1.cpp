#include <iostream>
using namespace std;

int main(){
	double ventas, bono;
	cout <<"Ingrese el importe de ventas: ";
	cin >> ventas;	
	
	if(ventas>=0 && ventas<=100){
		bono=(ventas * 3)/100;
		cout << "El vendedor vendio "<< ventas << " y el bono ganado fue de "<< bono <<endl;		
	}
	else if (ventas<=150){
		bono=(ventas * 4)/100;
		cout << "El vendedor vendio "<< ventas << " y el bono ganado fue de "<< bono <<endl;		
	}
	else if (ventas<=200){
		bono=(ventas * 5)/100;
		cout << "El vendedor vendio "<< ventas << " y el bono ganado fue de "<< bono <<endl;		
	}
	else if (ventas<=250){
		bono=(ventas * 6)/100;
		cout << "El vendedor vendio "<< ventas << " y el bono ganado fue de "<< bono <<endl;		
	}
	else if (ventas>250){
		bono=(ventas * 7)/100;
		cout << "El vendedor vendio "<< ventas << " y el bono ganado fue de "<< bono <<endl;		
	}
}
