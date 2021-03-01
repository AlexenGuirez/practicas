     if(operacion==1){ 
		resultado = suma(a,b);
		cout << "El resultado de la suma fue: " << resultado << endl;
	}
	else if(operacion==2){ 
		resultado = resta(a,b);
		cout << "El resultado de la resta fue: " << resultado << endl;
	}
	else if(operacion==3){ 
		resultado = multi(a,b);
		cout << "El resultado de la multiplicacion fue: " << resultado << endl;
	}
	else if(operacion==4){ 
		resultado = div(a,b);
		cout << "El resultado de la division fue: " << resultado << endl;
	}
}
