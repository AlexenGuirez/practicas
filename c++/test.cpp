#include <iostream>
#include <cmath>
#include <cstdio>
/*Sacar Modulo max 3 Dimensiones*/
class MMM{
  public:
   float x; float y; float z;
   
     MMM() : x(), y(), z(){/*Nada*/}
};

using namespace std;
int main () {
  MMM call;
  printf ("Numero para la coordenada X: "); scanf("%f",&call.x);
  printf ("Numero para la coordenada Y: "); scanf("%f",&call.y);
  printf ("Numero para la coordenada Z: "); scanf("%f",&call.z);

  
  float netox=pow(call.x, 2);
  float netoy=pow(call.y, 2);
  float netoz=pow(call.z, 2);
  float neto=netox+netoy+netoz;
      
  cout << "call X: " << call.x;    
  cout << "     call Y: " << call.y << endl;
  cout << "call Z: " << call.z;
  cout << "     Modulo: " << sqrt(neto) << endl;  
  getchar(); 
  return 0; 
}
