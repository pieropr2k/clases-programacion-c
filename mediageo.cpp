#include<stdio.h>
#include <math.h>
main(){
   int x1,x2,x3,x4;
   double mc,mg;
   printf("Ingrese el primer numero: ");scanf("%i",&x1);
   printf("Ingrese el segundo numero: ");scanf("%i",&x2);
   printf("Ingrese el tercer numero: ");scanf("%i",&x3);
   printf("Ingrese el cuarto numero: ");scanf("%i",&x4); 
   mc=sqrt((pow(x1,2)+pow(x2,2)+pow(x3,2)+pow(x4,2))/4);
   mg=sqrt(sqrt(x1*x2*x3*x4));
   printf("La media cuadratica es: %.3lf",mc);
   printf("\nLa media geometrica es: %.2lf",mg);
   printf("\n");   

}
