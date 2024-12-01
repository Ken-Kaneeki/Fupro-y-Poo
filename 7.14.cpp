#include <iostream>
#include <cmath>
using namespace std;

int main() {
	char menu;
	double dato;
	bool di=false;
	while(menu!='E'){
		cin>>menu;
		switch(menu){
		case 'A':
			cout<<"Ingrese el dato:"<<endl;
			cin>>dato;
			di=true;
			break;
		case 'B':
			if(!di){
				cout<<"Debe ingresar el caracter A antes";
			}else{
				cout<<"El doble del dato es:"<<2*dato<<endl;
			}
			break;
		case 'C':
			if(!di){
				cout<<"Debe ingresar el caracter B antes";
			}else{
				if(fmod(dato,2)==0){
					cout<<"El dato es par "<<endl;
				}else{
					cout<<"El dato es impar "<<endl;
				}
			}
			break;
		case 'D':
			if(!di){
				cout<<"Debe ingresar el caracter C antes";
			}else{
				bool esprimo=true;
				for(int i=2;i<=dato/2;i++) { 
					if(fmod(dato,i==0)){
						esprimo=false;
						break;
					}
				}
				if(esprimo){
					cout<<"El dato es primo "<<endl;
				}else{
					cout<<"El dato no es primo "<<endl;
				}
			}
		break;
		case 'E':
			cout<<"Salir"<<endl;
			break;
		default:
			cout<<"Opcion invalida, elija entre A y E"<<endl;
		}
	}
	return 0;
}


