#include <iostream>
#include <cmath>
#include <cstdio>


using namespace std;

main(){
	int matriz[5][5];  //Declarar la Matrix 5x5
	
	for(int i=0;i<5;i++){ // Ciclo para Recorrer la Fila
		for(int j=0;j<5;j++){ // Ciclo para Recorrer la Columna
			cin >> matriz[i][j]; // Insertar Dato de la Matriz , Izquierda a Derecha y baja cada 5 datos.			
		}
	}
	for(int i=0;i<5;i++){ // Ciclo para Recorrer la Fila para Imprimir
		for(int j=0;j<5;j++){ //Ciclo para Recorrer la Columna para Imprimir
			cout << matriz[i][j]<<" "; // Imprimir Dato de la Matriz, Izquierda a Derecha.
		}
		cout << endl; // Salto de Fila cada 5 Datos.
	}

}

