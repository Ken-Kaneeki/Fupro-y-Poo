#include <iostream>
#include <algorithm>
using namespace std;
struct nota{
	string apellido;
	string nombre;
	int np1;
	int nr1;
	int np2;
	int nr2;
};
struct rf{
	string apellido;
	string nombre;
	string cf;
	int nf;
};
rf crf(const nota& notas) {
	rf resultado;
	resultado.apellido=notas.apellido;
	resultado.nombre=notas.nombre;
	int mn1=max(notas.np1,notas.nr1);
	int mn2=max(notas.np2,notas.nr2);
	if(mn1==-1 || mn2==-1 || mn1 <4 || mn2<4){
		resultado.cf="Libre";
		resultado.nf=-1;
	} else {
		double promedio= (mn1+mn2)/2.0;
		if(promedio>=7){
			resultado.cf="Promocionado";
			resultado.nf=(promedio - static_cast<int>(promedio) >= 0.5) ? static_cast<int>(promedio) + 1 : static_cast<int>(promedio);;
		}else {
			resultado.cf="Regular";
			resultado.nf=-1;
		}
	}
	return resultado;
}
int main() {
	nota alum;
	cout<<"Ingrese el apellido del alumno: ";
	cin>>alum.apellido;
	cout<<"Ingrese el nombre del alumno: ";
	cin>>alum.nombre;
	cout<<"Ingrese la nota del P1 (-1 si no rindio): ";
	cin>>alum.np1;
	cout<<"Ingrese la nota del R1 (-1 si no rindio): ";
	cin>>alum.nr1;
	cout<<"Ingrese la nota del P2 (-1 si no rindio): ";
	cin>>alum.np2;
	cout<<"Ingrese la nota del R2 (-1 si no rindio): ";
	cin>>alum.nr2;
	rf resultado= crf(alum);
	cout<<"Resultado final del alumno: "<<resultado.apellido<<","<<resultado.nombre<<endl;
	cout<<"Condicion final: "<<resultado.cf<<endl;
	if(resultado.cf=="Promocionado"){
		cout<<"Nota final: "<<resultado.nf<<endl;
	}
	return 0;
}

