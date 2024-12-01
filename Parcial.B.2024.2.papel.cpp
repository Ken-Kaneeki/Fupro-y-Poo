#include <iostream>
#include <vector>
#include <matrix>
using namespace std;
struct tunel{
	int tipo;
	float costo;
	char destino;
};
void cantidad(const vector<tunel>& vehiculos){
	int contp[5]={0};
	int contsf[5]={0};
	int contt[5]={0};
	for(const auto& car:vehiculos){
		if(car.destino=='P'){
			contp[car.tipo-1]++;
		}else if(car.destino=='S'){
			contsf[car.tipo-1]++;
		}
		contt[car.tipo-1]++;
	}
	cout<<"Cantidad de vehiculos y cantidad de veces que se fue a cada destino: "<<endl;
	for(int i=0;i<5;i++) { 
		cout<<"Cantidad del vehiculo "<<i+1<<": "<<contt[i]<<endl;
		cout<<"Parana: "<<contp[i]<<endl;
		cout<<"Santa fe: "<<contsf[i]<<endl;
	}
}
void frecuente(const vector<tunel>& vehiculo,char destino){
	int cont[5]={0};
	for(const auto&car:vehiculo){
		if(car.destino==destino){
			cont[car.tipo-1]++;
		}
	}
	int max1=-1,max2=-1,tipo1=-1,tipo2=-1;
	for(int i=0;i<5;i++) { 
		if(cont[i]>max1){
			max2=max1;
			tipo2=tipo1;
			max1=cont[i];
			tipo1=i;
		}else if(cont[i]>max2){
			max2=cont[i];
			tipo2=i;
		}
	}
	cout<<"Los dos tipos de vehiculos mas frecuentes en Parana y Santa Fe "<<(destino=='P' ? "Parana" : "Santa Fe")<<" son: "<<endl;
	if(tipo1!=-1)cout<<"El primer tipo con mas frecuencia "<<tipo1+1<<" con "<<max1<<" vehiculos"<<endl;
	if(tipo2!=-1)cout<<"El segundo tipo con mas frecuencia "<<tipo2+1<<" con "<<max2<<" vehiculos"<<endl;
}
float recaudacion(const vector<tunel>& vehiculo,char destino){
	float total=0;
	for(const auto& car:vehiculo){
		if(car.destino==destino){
			total=total+car.costo;
		}
	}
	return total;
}
int main() {
	vector<tunel> vehiculos;
	while(true){
		tunel vehiculo;
		cout<<"Ingrese el tipo de vehiculo: ";cin>>vehiculo.tipo;
		if(vehiculo.tipo==0)break;
		cout<<"Ingrese el destino: ";cin>>vehiculo.destino;
		switch(vehiculo.tipo){
		case 1:vehiculo.costo=500;break;
		case 2:vehiculo.costo=1000;break;
		case 3:vehiculo.costo=1500;break;
		case 4:vehiculo.costo=2000;break;
		case 5:vehiculo.costo=2500;break;
		}
		vehiculos.push_back(vehiculo);
	};
	cantidad(vehiculos);
	frecuente(vehiculos,'P');
	cout<<"Recaudacion total de Parana $"<<recaudacion(vehiculos,'P')<<endl;
	cout<<"Recaudacion total de Santa Fe $"<<recaudacion(vehiculos,'S');
	
	return 0;
}

