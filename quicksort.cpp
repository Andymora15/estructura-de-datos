#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
void quicksort(double [20],int, int);
void escribir(double [20],int );
int main()
{
    int i,nro;
    double B[20];
    
    cout<<"ingrese la dimension del arreglo"<<endl<<endl;
    cin>>nro;
    cout<<"ingrese elementos del arreglo"<<endl<<endl;
    for(i=0;i<nro;i++)
    {
        cout<<"B["<<i<<"]= ";
        cin>>B[i];
    }
    cout<<"ARREGLO ORIGINAL"<<endl<<endl;
    for(i=0;i<nro;i++)
    {
        cout<<B[i]<<setw(5);
    }
    cout<<"\n\t***proceso***\n";
    cout<<"i\tj\tpivote\tlista\n";
    quicksort(B,0,nro-1);
    escribir(B,nro);
    getch();
    //delete B;
    
    
    
    return 0;
}
void quicksort(double A[20],int primero,int ultimo)
{
    int central,i,j;
    double pivote;
    central=(primero+ultimo)/2;
    pivote=A[central];
    i=primero;
    j=ultimo;
	int nro=primero+ultimo;
    do
	{
    	cout<<i<<"\t"<<j<<"\t"<<pivote<<"\t";
        while(A[i]<pivote) i++;
        while(A[j]>pivote) j--;
        if(i<=j)
        {
      		double temp;
            temp=A[i];
            A[i]=A[j]; /*intercambia A[i] con A[j] */
            A[j]=temp;
            i++;
            j--;
        }
        for(int k=0;k<nro;k++){
        	cout<<A[k]<<" ";
		}
		cout<<"\n";
    }
    
    while(i<=j);
    if(primero<j)
        quicksort(A,primero,j); /*mismo proceso con sublista izquierda*/
    if(i<ultimo)
        quicksort(A,i,ultimo); /*mismo proceso con sublista derecha*/
}
void escribir(double A[20], int n)
{
    int i;
    cout<<endl<<"ARREGLO ORDENADO POR METODO DE QUICKSORT "<<endl<<endl;
    for(i=0;i<n;i++)
    {
        cout<<A[i]<<setw(5);
    }
    cout<<endl<<endl;
    
}