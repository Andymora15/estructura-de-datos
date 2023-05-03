#include<iostream>
#include<stack>
using namespace std;
int main(){
	int op,dato,tam,i;
	stack<int> p;
	cout<<"\t MENU \n1)INSERTAR DATOS\n2)EXTRAER DATOS\n3)VER EL TOP\n4)PILA CON DATOS\n";
	
	do{
		do{
			cout<<"\nIngrese la opcion: ";
			cin>>op;
		}while(op<1 or op>4 );
		switch (op){
			case 1:
				cout<<"\nCuantos datos desea ingresar: ";cin>>tam;
				for(i=1;i<=tam;i++){
						cout<<"\nIngrese dato: ";cin>>dato;
					p.push(dato);
				}
				
				break;
			case 2:
				p.pop();
				cout<<"Se extrajo: "<<dato;
				break;
			case 3:
				cout<<"El top es: "<<p.top()<<"";
				break;
			case 4:	
				if(p.empty()){
					cout<<"\nNo Tiene datos.";
					
				}
				else{
					cout<<"\nSi tiene";
				}
			
				break;		
		}
		do{
			cout<<"\nDesea finalizar?: 1) si  2)no: ";cin>>op;
		}while(op<1 or op>2);
		cout<<"---------------------------------------------------------------------------------";
	}while(op!=1);
		
	
		
	
	
	
	return 0 ;
}