#include <conio.h>        //biblioteca de entrada/salida a la pantalla
#include <stdio.h>        //biblioteca de entrada/salida estandar
#include <windows.h>      //biblioteca del sistema de sistema operativo
#include <stdlib.h>

main()
{
	//zona de declaracion de variables
     int      edad;
  	 char     manos, nombre(10);
     float    promedio;



            printf("hola a mis clases virtuales");   //funcion de impresion
            system ("pause");
            printf("pausa con temporizador");
            Sleep(3000);
            printf("escribe tu nombre");
            //scanf ("%tipo fr variables",&nombre de la variable
            scanf("%S",&nombre);        //string (cadena de caracteres)
            printf("escribe tu edad");
            scanf("%i",&edad);
            getche();  //pausa para pulso de teclado
            printf("¿Cual es tu promedio?");  //funcion de impresion
            scanf("%f",&promedio);
            printf("¿ya te lavaste las manos? S/N");
            manos=getche();   //scanf("%c",&manos);
            Sleep(5000);
}
