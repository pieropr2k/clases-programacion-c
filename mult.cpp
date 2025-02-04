#include<stdio.h>
int obtener_algo(int a);
main(void){
   int i,pro=1;                                      // pro = 1
   
   pro = obtener_algo(pro);
   // variable *= num => variable = variable * num; 
   
   pro*=10; printf("%i, ",pro); // pro  =  pro * 10 // pro = 1 * 10; = 10
   pro*=10; printf("%i, ",pro); // pro  =  pro * 10 // pro = 10 * 10 = 100
   pro*=10; printf("%i, ",pro); // pro  =  pro * 10  // pro = 100 * 10 = 1000
   pro*=10; printf("%i, ",pro); // pro  =  pro * 10
   pro*=10; printf("%i, ",pro); // pro  =  pro * 10
}
