#include <iostream>
using namespace std;
int anios(int fecha,int hoy){
	int dif=hoy-fecha;
	int anios=dif/10000;
	return anios;
}
int main() {
	int anio1,mes1,dia1;
	int dia2,mes2,anio2;
	int fecha=20050208,hoy=20240717,resto1,resto2;
	cout<<"Ingrese la fecha nro 1: "<<endl;
	anio1=fecha/10000;
	resto1=fecha%10000;
	mes1=resto1/100;
	dia1=resto1%100;
	cout<<dia1<<"/"<<mes1<<"/"<<anio1<<endl;
	cout<<"Ingrese la fecha nro 2: "<<endl;
	anio2=hoy/10000;
	resto2=hoy%10000;
	mes2=resto2/100;
	dia2=resto2%100;
	cout<<dia2<<"/"<<mes2<<"/"<<anio2<<endl;	
	cout<<"Años de diferencia: "<<anios(fecha,hoy);
	return 0;
}

