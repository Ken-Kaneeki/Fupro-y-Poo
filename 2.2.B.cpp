#include <iostream>
#include <matrix>
#include <vector>
using namespace std;

int main() {
	int dia,anio,monto,fijo=100000,cont=0,mig=-1,emg=-1;
	vector<int> escu(2);
	vector<int> meses(2);
	vector<int> gt(2,0);
	for(int i=0;i<escu.size();i++) { 
		for(int j=0;j<meses.size();j++) { 
			cin>>escu[i];
			if(escu[i]==0){
				break;
			}
			cin>>meses[j];
			cin>>dia>>anio>>monto;
			cout<<"Escuela N° "<<escu[i]<<" aporto "<<monto<<". Fecha: "<<dia<<"/"<<meses[j]<<"/"<<anio<<endl;
			cout<<"A la escuela N° "<<escu[i]<<" le sobraron $"<<fijo-monto<<" pesos "<<endl;
			if(meses[j]==2){
				if(fijo-monto==0){
					cont++;
				}
			}
			cout<<"La cantidad de escuelas que gastaron todo en febrero fueron "<<cont<<endl;
			if(meses[j]==10){
				if(mig==-1 || monto<mig){
					mig=monto;
					emg=escu[i];
			}
		}
	}
	if(emg!=-1){
		cout<<"La escuela q menos gasto fue la N° "<<emg<<endl;
	}
	return 0;
	}
}

