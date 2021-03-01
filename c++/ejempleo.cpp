#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

float poto(int a,int b) {
	float resultado;
	if(b==2){
	    resultado=a*a;}
	else if(b==3){
		resultado=a*a*a;}
	else if(b==4){
		resultado=a*a*a*a;}
	
	return resultado;
}


int main(){
float x,z;
int a,b;

scanf("%i",&a);
scanf("%i",&b);

x=poto(a,b);
z=pow(a,b);

cout << x << endl;
cout << z << endl;
return 0;	
}
