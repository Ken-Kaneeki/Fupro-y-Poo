#include <iostream>
using namespace std;
int mayor3(int a,int b,const int &c=-1){
	int mayor;
	if(c!=-1){
		if(a>b){
			if(a>c){
				mayor=a;
			}else{
				mayor=c;
			}
		}else{
			if(b>c){
				mayor=b;
			}else{
				mayor=c;
			}
		}
	} else {
		if(a>b){
			mayor=a;
		}else{
			mayor=b;
		}
	}
	return mayor;
}
	int main() {
		int a,b,c;
		cout<<"Ingrese los 3 valores: "<<endl;
		cin>>a;
		cout<<"Valor A: "<<a<<endl;
		cin>>b;
		cout<<"Valor B: "<<b<<endl;
		cin>>c;
		cout<<"Valor C: "<<c<<endl;
		int mayor=mayor3(a,b,c);
		cout<<"El mayor de los 3 numeros es: "<<mayor<<endl;
		return 0;
	}

