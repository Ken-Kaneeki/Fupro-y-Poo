#include <iostream>
#include <vector>
using namespace std;
struct paciente{
	int dni;
	char sexo;
	float hemog1;
	float hemog2;
};
void prom_hemog(vector<paciente>& v){
int conth=0,contm=0;
float sm=0.0,sh=0.0;
for(const paciente& pacien: v){
	if(pacien.sexo=='M'){
		sh+=pacien.hemog2;
		conth++;
	}else if(pacien.sexo=='F'){
		sm+=pacien.hemog2;
		contm++;
	}
}
	if(conth>0){
		float promh=sh/conth;
		cout<<"Promedio hombres: "<<promh<<endl;
	}
	if(contm>0){
		float promm=sm/contm;
		cout<<"Promedio mujeres: "<<promm<<endl;
	}

}
void group_hemobaja(vector<paciente>& b){
	cout<<"Hombres: ";
	for(const paciente& pacient: b){
		if(pacient.sexo=='M'){
			if(pacient.hemog2<=pacient.hemog1){
					cout<<pacient.dni<<" , ";
			}
		}
	}
	cout<<endl;
	cout<<"Mujeres: ";
	for(const paciente& pacient: b){
		if(pacient.sexo=='F'){
		if(pacient.hemog2<=pacient.hemog1){
			cout<<pacient.dni<<" , ";
		}
	}
	}
}
int main() {
	int n;
	cin>>n;
	vector<paciente> paci(n);
	for(int i=0;i<paci.size();i++) { 
		cout<<"Paciente "<<i<<":"<<endl;
		cin>>paci[i].dni;
		cin>>paci[i].sexo;
		cin>>paci[i].hemog1;
		cin>>paci[i].hemog2;
		cout<<"Dni: "<<paci[i].dni<<endl;
		cout<<"Sexo: "<<paci[i].sexo<<endl;
		cout<<"Hemoglobina al inicio: "<<paci[i].hemog1<<endl;
		cout<<"Hemoglobina al final: "<<paci[i].hemog2<<endl;
		cout<<endl;
	}
	prom_hemog(paci);
    group_hemobaja(paci);
	return 0;
}

