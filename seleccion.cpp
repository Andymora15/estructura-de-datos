#include<iostream>
using namespace std;
int main (){
	int tam=5;
	int lista[tam]={50,20,40,80,30};
	int i=0,j=0,k=0;
	int min,aux;
	for (i = 0; i < tam - 1; i++){
		min = i;
 		for (j = i + 1; j < tam; j++){
			 if (lista[j] < lista[min]){
 				min = j;
 				}
 		}
 		if (i != min) 
 		{
		 aux= lista[i];
 		lista[i] = lista[min];
 		lista[min] = aux;
 		}
 	}
	cout<<"lista ordenada\n";
	for(k=0;k<tam;k++){
		cout<<lista[k]<<" ";
	}
	
	
	return 0;
}