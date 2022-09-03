#include <iostream>
#include <cmath>
using namespace std;

void lab1(void);
void lab2(void);
void mostrar(float resultado, float nota);

const float Pi = 3.14154;

int main(){
 char opcion;
 cout<<"Selecciona el laboratorio que desea modificar"<<endl;
 cout<<" a) Laboratorio 1\n b) Laboratorio 2\n "; cin>>opcion;

 switch(opcion){
  case 'a': lab1(); break;
  case 'b': lab2(); break;
 }
 return 0;
}

void mostrar(float resultado, float nota){   cout<<"La nota inicial es de: "<<nota<<", la nueva nota es de: "<<resultado<<endl; return;  }

void lab1(void){
 float nota, resultado = 0;
  do{
	cout<<"Ingrese la nota inicial: "<<endl;
    cin>>nota;
	}
	while (nota<1 || nota>10);
 
 if(nota<5){

 resultado = nota + ((nota * 5)/100);
 mostrar(resultado, nota);
 return;
}else if(nota<=9){
 resultado = nota + ((nota * 10)/100);
 mostrar(resultado, nota);
 return;
}else{
 resultado = nota;
 mostrar(resultado, nota);
 return;
}
}

void lab2(void){
 float nota, resultado = 0;
  do{
	cout<<"Ingrese la nota inicial: "<<endl;
    cin>>nota;
	}
	while (nota<1 || nota>10);
 
 if(nota>=8 && nota<=9){

 resultado = nota + 1;
 mostrar(resultado, nota);
 return;
}else{
 resultado = nota;
 mostrar(resultado, nota);
 return;
}
}

