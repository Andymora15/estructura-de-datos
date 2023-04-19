#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main(){
	int i,c,num,aleatorio;
	srand(time(NULL));
	cout<<"ingrese la dimension del arreglo: ";
	cin>>num;
	int lista[num];
	for(i=0; i< num; i++)
    {
       // aleatorio = 1+ rand() % (100000- 1);
		aleatorio =rand();
        lista[i]=aleatorio;
        cout << lista[i]<< " ";
    }
	
	return 0;
}