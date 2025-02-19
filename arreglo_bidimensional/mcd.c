#include<iostream>
using namespace std;
bool es_primo(int n);
int mcd(int x, int y, int z, int prim_mcd[1000], int j);
int mcm(int x, int y, int z, int prim_mcm[1000], int j);
void quick_sort(int arr[100], int izq, int der);
int main(){
	int x, y, z, j=0, l=0;
	int prim_mcd[1000];
	int prim_mcm[1000];
	cout<<"Dame el valor de x: "<<endl;
	cin>>x;
	cout<<"Dame el valor de y: "<<endl;
	cin>>y;
	cout<<"Dame el valor de z: "<<endl;
	cin>>z;
	int arr[3]={x,y,z};
	quick_sort(arr,0,2);
	cout<<endl;
	for(int i=2; i<=arr[0]; i++){
		if(es_primo(i)){
			prim_mcd[j]=i;
			j++;
		}
	}
	for(int i=2; i<=arr[2]; i++){
		if(es_primo(i)){
			prim_mcm[l]=i;
			l++;
		}
	}
	cout<<"El MCD de los 3 numeros es: "<<endl;
	cout<<mcd(x,y,z,prim_mcd,j);
	cout<<endl;
	cout<<"El MCM de los 3 numeros es: "<<endl;
	cout<<mcm(x,y,z,prim_mcm,l);
}
bool es_primo(int n){
	int flag=1;
	for(int i=2; i<n; i++){
		if(n%i==0)	flag=0;
	}
	return flag;
}
int mcd(int x, int y, int z, int prim_mcd[1000], int j){
	int prod=1;
	for(int i=0; i<j; i++){
		while( x%prim_mcd[i]==0 && y%prim_mcd[i]==0 && z%prim_mcd[i]==0 ){
			prod*=prim_mcd[i];
			x=x/prim_mcd[i];
			y=y/prim_mcd[i];
			z=z/prim_mcd[i];
		}
	}
	return prod;
}
int mcm(int x, int y, int z, int prim_mcm[1000], int j){
	int prod=1;
	for(int i=0; i<j; i++){
		while( x%prim_mcm[i]==0 || y%prim_mcm[i]==0 || z%prim_mcm[i]==0 ){
			prod*=prim_mcm[i];
			if(x%prim_mcm[i]==0)	x=x/prim_mcm[i];	
			if(y%prim_mcm[i]==0)	y=y/prim_mcm[i];	
			if(z%prim_mcm[i]==0)	z=z/prim_mcm[i];	
		}
	}
	return prod;
}
void quick_sort(int arr[100], int izq, int der){
    int i=izq, j=der, temp;
    int p=arr[(izq+der)/2];
    while(i<=j){
        while(arr[i]<p){
            i++;
        }
        while(arr[j]>p){
            j--;
        }
        if(i<=j){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }
    }
    if(izq<j){
        quick_sort(arr, izq, j);
    }
    if(i<der){
        quick_sort(arr, i, der);
    }
}
