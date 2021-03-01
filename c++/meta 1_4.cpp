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
	int a,b,operacion,resultado; 
	cout <<"Elige que operacion vas hacer" <<endl << "tienes de opcion: suma(1),resta(2),multi(3) y div(4)..." << endl;	cin >> operacion;  
	cout << "Elige el primer valor: ";   cin >> a;   
	cout << "Elige el segundo valor: " ; cin >> b; 
	switch(operacion) {
		case 1: resultado = suma(a,b);
		cout << "El resultado de la suma fue: "    << resultado << endl;break;
		case 2: resultado = resta(a,b);
		cout << "El resultado de la resta fue: "   << resultado << endl;break;
		case 3: resultado = multi(a,b);
		cout << "El resultado de la multi fue: "   << resultado << endl;break;
		case 4: resultado = div(a,b);
		cout << "El resultado de la division fue: "<< resultado << endl;break;
		default: cout << "seleccionaste una operacion que no existe";
    }
}
