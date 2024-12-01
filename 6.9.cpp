#include <iostream>
using namespace std;

int main() {
	int kmi,kmf,ltc,nafta,kmt,ltt;
	cout<<"Ingrese los km iniciales: ";
	cin>>kmi;
	cout<<"Ingrese los km finales: ";
	cin>>kmf;
	cout<<"Ingrese el precio de la nafta: ";
	cin>>nafta;
	cout<<"Ingrese los litros cargados: ";
	cin>>ltc;
	kmt=kmf-kmi;
	cout<<"Los kilometros que recorrio son: "<<kmt<<endl;
	ltt=kmt/ltc;
	cout<<"Los litros que consume por kilometro son: "<<ltt<<" litros"<<endl;
	float gtv=kmt*nafta;
	cout<<"Gasto total del viaje: "<<gtv<<" pesos"<<endl;
	int desc;
	cout<<"Ingrese el porciento de descuento para el viaje: ";
	cin>>desc;
	float gtcd=(gtv*desc)/100;
	cout<<"Gasto total del viaje con descuento: "<<gtcd<<" pesos"<<endl;
	return 0;
}

