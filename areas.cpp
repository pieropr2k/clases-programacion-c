#include <stdio.h>
#include <math.h>
#include <stdbool.h>
main() {
	//int numero = 9;
	bool valor = (9 <= 9);
   printf("verdad? = %d\n", valor);	



   double x,y,z,s,area;
   
   printf("Ingrese primer lado: ");
   scanf("%lf",&x);
   printf("Ingrese segundo lado: ");
   scanf("%lf",&y);
   printf("Ingrese tercer lado: ");
   scanf("%lf",&z);
   
   // semisuma
   s=(x+y+z)/2;
   
   // area del triangulo
   area = sqrt(s*(s-x)*(s-y)*(s-z));
   
   // el triangulo exista
   bool val = ((x+y)>z) && ((z+y)>x) && ((x+z)>y);
   
   // y: &&
   // (9 == 9) && (8 < 0) = false
   // true && false = false
   
   // o: ||
   // (9 == 9) || (8 < 0) = true
   // true || false = true
   
   //printf (val ? "Si es un triangulo y su area es: %.2lf\n": "No es un triangulo\n",area);
   if (val == true) {
   		printf("Si es un triangulo y su area es: %.2lf\n",area);
   } else {
   		printf("No es un triangulo\n");
   }
   
   //system("PAUSE");
}
