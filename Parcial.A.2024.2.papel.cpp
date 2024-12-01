#include <iostream>
#include <matrix>
#include <vector>
using namespace std;
void deficit(const matrix<float>& gastos,const vector<float>& presupuesto){
	cout<<"Hospitales con deficit al finalizar el año: "<<endl;
	for(int i=0;i<10;i++) { 
		float total_gastos=0;
		for(float gasto : gastos[i]){
			total_gastos+=gasto;
		}
		if(total_gastos>presupuesto[i]){
			cout<<"Hospital "<<i+1<<" con deficit de "<<total_gastos-presupuesto[i]<<endl;
		}
	}
}
void mayor_gasto(const matrix<float>& gastos){
	cout<<"Hospitales con mayor gasto que el mes anterior: "<<endl;
	for(size_t mes=1;mes<gastos.size(1);++mes) { 
		int contador=0;
		for(size_t i=0;i<gastos.size(0);++i) { 
			if(gastos[i][mes]>gastos[i][mes-1]){
				contador++;
			}
		}
		cout<<"Mes "<<mes+1<<": "<<contador<<" hospitales"<<endl;
	}
}
void mes_monto(const matrix<float>& gastos,int codigo_hospital){
	int mes_gasto=0;
	float monto_gasto=0;
	for(size_t mes=0;mes<gastos.size(1);++mes) { 
		if(gastos[codigo_hospital-1][mes]>monto_gasto){
			monto_gasto=gastos[codigo_hospital-1][mes];
		    mes_gasto=mes;
		}
	}
	cout<<"El mes que mas gasto el hospital "<<codigo_hospital<<" fue el "<<mes_gasto+1<<" con un monto de "<<monto_gasto<<endl;
}
int main() {
	int codigo_hospital,dia,mes;
	float monto;
	vector<float> presupuesto(2);
	matrix<float> gastos(2,2);
	cout<<"Ingrese los presupuestos anuales de los hospitales "<<endl;
	for(int i=0;i<presupuesto.size();i++) { 
		cout<<"Codigo de hospital: ";cin>>codigo_hospital;
		cout<<"Presupuesto anual: ";cin>>presupuesto[codigo_hospital-1];
	}
	cout<<"Ingrese los gastos de los hospitales: "<<endl;
	while(true){
			cout<<"Codigo hospital: ";cin>>codigo_hospital;
			if(codigo_hospital==0) break;
			cout<<"Dia: ";cin>>dia;
			cout<<"Mes: ";cin>>mes;
			cout<<"Monto: ";cin>>monto;
			gastos[codigo_hospital-1][mes-1]+=monto;
	}
	return 0;
}

