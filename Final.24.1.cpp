#include <iostream>
#include <matrix>
#include <vector>
using namespace std;
int calc(const matrix<float>& v,float summvt){
	int dia=-1;
	for(size_t j=0;j<v.size(1);j++) { 
		float sc=0.0;
		for(size_t i=0;i<v.size(0);i++) { 
			sc+=v[i][j];
		}
		if(summvt>37.0){
			dia=j+1;
			break;
		}
	}
	return dia;
}
void vpom(const matrix<float>& b,float summvpo){
	for(size_t i=0;i<b.size(1);i++) { 
		bool sum=false;
		for(size_t j=0;j<6;j++) { 
			if(summvpo<75.0){
				sum=true;
				break;
			}
		}
		if(sum){
			cout<<"El paciente "<<i+1<<" tuvo hipoxemia dos dias o mas seguidos"<<endl;
		}
	}
}
int main() {
	int dia,hora,paci;
	float vpo,vt,sumvpo=0.0,sumvt=0.0;
	matrix<float> tabla(120,7);
	for(size_t i=0;i<tabla.size(0);i++) { 
		cout<<"Ingrese el paciente: ";
		cin>>paci;
		for(size_t j=0;j<tabla.size(1);j++) { 
			cout<<"Ingrese el dia: ";
			cin>>dia;
			if(dia<=3){
				for(int i=1;i<7;i++) { 
					cout<<"Ingrese la hora: ";
					cin>>hora;
					cout<<"Ingrese el vpo: ";cin>>vpo;
					cout<<"Ingrese el vt: ";
					cin>>vt;
					sumvpo+=vpo;
					sumvt+=vt;
				}
			}
			cout<<"Temperatura media del vpo del dia "<<dia<<" es de: "<<sumvpo/6<<endl;
			cout<<"Temperatura media del vt del dia "<<dia<<" es de: "<<sumvt/6<<endl;
			int def=calc(tabla,sumvt);
			cout<<"La temperatura media supero los 37° los dias: "<<def<<endl;
		}
		if(dia>tabla.size(1)){
			break;
		}
	}
	vpom(tabla,sumvpo);
	return 0;
}

