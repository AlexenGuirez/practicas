#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;
/*Declarar Funciones*/
int suma(int a,int b){  
	int resultado;
	resultado=a+b;
	return resultado;}  
int resta(int a,int b){ 
	int resultado;
	resultado=a-b;                                                                                                                                               
	return resultado;}                           
int multi(int a,int b){ 
	int resultado;          
	resultado=a*b;
	return resultado;}  
int div(int a,int b){   
	int resultado;
	resultado=a/b;
	return resultado;}
		
main(){
	int a,b,exit,operacion,resultado; 
	cout <<"Elige que operacion vas hacer" <<endl << "tienes 4 opciones: " << endl;
	cout <<"Suma elige 1, Resta elige 2, Multiplicacion elige 3, division elige 4"<<endl; cin >> operacion; 
	cout <<"Inserta tus 2 valores"<<endl; 
	cout << "primer valor: ";   cin >> a;   
	cout << "segundo valor: " ; cin >> b; 
	switch(operacion) {
		case 1: resultado = suma(a,b);
		cout << "El resultado de la suma fue: "    << resultado << endl;
		break;
		case 2: resultado = resta(a,b);
		cout << "El resultado de la resta fue: "   << resultado << endl;
		break;
		case 3: resultado = multi(a,b);
		cout << "El resultado de la multi fue: "   << resultado << endl;
		break;
		case 4: resultado = div(a,b);
		cout << "El resultado de la division fue: "<< resultado << endl;
		break;
		default: cout << "Error, no existe esa Operacion";
    }
}
