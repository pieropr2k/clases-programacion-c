#include <stdio.h>
#include<math.h> 

int det(int n, int a[n][n]);
int cofactor(int n, int x, int y, int a[n][n]);

//2 1
//3 4

int main(){
	int n,i,j,x=3,y=5;  
	printf("Dame el orden del determinante:\n");  
	scanf("%d", &n);
	int arr[n][n];
	
	printf("Escribe los elementos de la matriz a evaluar\n");  
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) { 
			printf("Dame el elemento[%i][%i]:\n", i, j); 
			scanf("%d", &arr[i][j]);
			//cin>>arr[i][j];
			x+=5;
		}
	} 
	printf("El determinante de la matriz es:%i \n", det(n, arr)); 
}

/*
[1   8  -2]
[0  -1  8}
[1  2   2]    NxN =>  N-1 X N-1 

det = 1 x det([-1  8] x 1 + 8 x det([0  8] x -1  + -2 x det([0  -1] x 1 
             [2   2])               [1  2])                 [1  2]) 
             
             
*/

int det(int n, int a[100][100]){
	int sum=0, j;
	if( n==2 ){
		return (a[0][0]*a[1][1])-(a[0][1]*a[1][0]);
	}else{
		for(j=0; j<n; j++){
			sum += a[0][j]*cofactor(n,0,j,a)*pow(-1, j);
		}
		return sum;
	}
}
// x = fila que se va a "anular" en el analisis
// y = columna que se va a "anular"
int cofactor(int n, int x, int y, int a[n][n]){
	int arr[100][100], vect[100], k=0, i, j;
	//vect = [4,5.6,....]
	
	    // aca se saca el pre-cofactor
		for(i=0; i<n; i++){
			for(j=0; j<n; j++){
				if(i!=x && j!=y){
					vect[k]=a[i][j];
					k++;
				}
			}
		}
		// vect = [2,.....]
		//arr: tendra la matriz cofactor:
		k=0;
		for(i=0; i<n-1; i++){
			for(j=0; j<n-1; j++, k++){
				arr[i][j]=vect[k];
			}
		}
		
		return det(n-1, arr);
}
