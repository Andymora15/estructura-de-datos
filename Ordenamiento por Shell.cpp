//Cristian Licto, Andre Michelena, Steven Paredes//
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int num,temp, a;
	int TAM=8;
	int intervalo, j,k;
int lista[TAM]={10,28,16,50,29,14,12,2};
intervalo=TAM/2;
cout<<"Lista desordenada\n";
for(int i=0 ;i<TAM; i++){
	cout<<lista[i]<<" ";
}
cout<<endl;
cout<<setw(20)<<"LISTA\n";
cout<<"j\tj>=0\tk\tlista[j]>lista[k]\ttemp\tlista[j]\tlista[k]\tLISTA\n";
while(intervalo>=1){
	for(int i=0; i+intervalo<TAM;i++ ){
		j=i;
		while(j>=0){
			cout<<j<<"\t";
			k=j+intervalo;
		    cout<<j<<">=0\t";
		    cout<<k<<"\t";
		    cout<<setw(5)<<lista[j]<<" >\t";
		    if(lista[j]>lista[k]){
		      cout<<setw(5)<<lista[k]<<"\t\t";
		      temp=lista[j];
		      cout<<temp<<"\t";
              lista[j] = lista[k];
              cout<<lista[j]<<"\t\t";
              lista[k] = temp;
              cout<<setw(5)<<lista[k]<<"\t";
              j=j-intervalo;
			}else{
				j=-1;
				cout<<setw(5)<<lista[k]<<"\t\t";
				cout<<"\t\t\t\t";
			}
		for(int l=0 ;l<TAM; l++){
			cout<<lista[l]<<" ";
           }
           cout<<endl;
		}
	}
	intervalo=intervalo/2;
}
cout<<endl;
cout<<"\nLista Ordenada\n";
for(int i=0 ;i<TAM; i++){
	cout<<lista[i]<<" ";
}
return 0;}