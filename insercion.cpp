#include<iostream>
using namespace std;
int main(){
	int tam=5;
	int lista[]={50,20,40,80,30};
	int i,j,k,num,a;
	
	for (i=1; i < tam; i++) {
		num = lista[i]; 
		a = i-1; 
		while (a >= 0 && lista[a] > num) { 
			lista[a + 1] = lista[a];
			a--;
		}
		lista[a+1] = num;
	}
	
	cout<<"lista ordenada";
	for(k=0;k<tam;k++){
		cout<<lista[k]<<" ";
	}
	
	
	return 0;
}