#include <stdio.h>
#include <math.h>

// M_PI : constante en math.h
#define PI 3.14
main() {
	
   double cat1,cat2,ang_rad,ang_seg;
   printf("Ingrese cateto opuesto al angulo: ");
   
   scanf("%lf", &cat1);
   
   printf("Ingrese cateto adyacente al angulo: ");
   scanf("%lf", &cat2);
   
   // Aca calculas el arcotangente:
   ang_rad=atan(cat1/cat2);
   
   ang_seg=ang_rad*(180/3.14);
//ang_seg=ang_rad*(180/M_PI);
   
   printf("El angulo es: %.3lf\n", ang_seg); 
   //system("PAUSE");
}
