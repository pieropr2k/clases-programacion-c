#include<iostream>
#include<math.h>
using namespace std;
int det(int a[100][100], int n);
int cofactor(int n, int x, int y, int a[100][100]);
int main(){
	int n,i,j,x=3,y=5; 
	int arr[100][100];
	cout<<"Dame el orden del determinante: "<<endl;
	cin>>n;
	cout<<"Escribe los elementos de la matriz a evaluar"<<endl;
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			cout<<"Dame el elemento ["<<i<<"]["<<j<<"]: ";
			cin>>arr[i][j];
			x+=5;
		}
	}
	cout<<"El determinante de la matriz es: "<<det(arr,n);
}
int det(int a[100][100], int n){
	int sum=0;
	if(n==2){
		return (a[0][0]*a[1][1])-(a[0][1]*a[1][0]);
	}else{
		for(int j=0; j<n; j++){
			sum+=cofactor(n,0,j,a)*a[0][j]*pow(-1, j);
		}
		return sum;
	}
}
int cofactor(int n, int x, int y, int a[100][100]){
	int arr[100][100], vect[100], k=0, i, j;
		for(i=0; i<n; i++){
			for(j=0; j<n; j++){
				if(i!=x && j!=y){
					vect[k]=a[i][j];
					k++;
				}
			}
		}
		k=0;
		for(i=0; i<n-1; i++){
			for(j=0; j<n-1; j++, k++){
				arr[i][j]=vect[k];
			}
		}
		return det(arr, n-1);
}
