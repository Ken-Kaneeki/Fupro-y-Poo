#include <iostream>
#include <matrix>
using namespace std;

int main() {
	int mej=1,maj=100,jugos,dias,suma=0;
	vector<int> vende(rand());
	int tvpd[30] = {0};
	for(int i=0;i<vende.size();i++) { 
			cin>>vende[i];
			cin>>dias;
			if(vende[i]==0 || vende[i]>15){
				break;
			};
			jugos=mej+(rand()%(maj-mej+1));
			cout<<"Vendedor N° "<<vende[i]<<" vendio "<<jugos<<" jugos "<<"el dia "<<dias<<endl;
			tvpd[dias - 1] += jugos;
			if(vende[i]==10){
				suma+=jugos;
				cout<<"El vendedor N° 10 vendio la cantidad de "<<suma<<" jugos"<<endl;
			}
			if(dias==10){
				cout<<"El vendedor N° "<<vende[i]<<" hizo un pedido de "<<jugos<<" jugos"<<endl;
			}
		}
	cout << "Cantidad vendida por día: " << endl;
	for (int i=0;i<30;i++) {
		cout << "El diaa " << i + 1 << " se vendieron " << tvpd[i] << " jugos" << endl;
	}
	return 0;
}

