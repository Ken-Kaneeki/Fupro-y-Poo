#include <iostream>
#include <vector>
using namespace std;
struct Fecha {
	int dia;
	int mes;
	int anio;
};
int edad(const Fecha& f_nac,const Fecha& f_hoy) {
	int e=f_hoy.anio-f_nac.anio;
	return e;
}
struct socio{
	string apellidos;
	string nombres;
	int dni;
	string categoria;
	Fecha fecha_nacimiento;
};
void actualizar(vector<socio>& socios,const Fecha& f_hoy){
	for(auto& club:socios){
		int e=edad(club.fecha_nacimiento,f_hoy);
		if(e<=12){
			club.categoria="Infantil";
		}else if(e>12 && e<=18){
			club.categoria="Juvenil";
		}else{
			club.categoria="Mayor";
		}
	}
}
int cal_recaudacion(const vector<socio>& socios,int cuota_infantil,int cuota_juveniles,int cuota_mayores){
	int total=0;
	for(auto& club:socios){
		if(club.categoria=="Infantil"){
			total+=cuota_infantil;
		}else if(club.categoria=="Juvenil"){
			total+=cuota_juveniles;
		}else{
			total+=cuota_mayores;
		}
	}
	return total;
}
int main() {
	int cuota_infantiles,cuota_juveniles,cuota_mayores,n;Fecha hoy={6,10,2024};
	cout<<"Ingrese el costo de la cuota de los infantiles: ";cin>>cuota_infantiles;
	cout<<"Ingrese el costo de la cuota de los juveniles: ";cin>>cuota_juveniles;
	cout<<"Ingrese el costo de la cuota de los mayores: ";cin>>cuota_mayores;
	cout<<"Ingrese la cantidad de socios: ";cin>>n;
	vector<socio> club(n);
	for(int i=0;i<club.size();i++) { 
		cout<<"Socio "<<i+1<<": "<<endl;
		cout<<"Apellido: ";cin>>club[i].apellidos;
		cout<<"Nombre: ";cin>>club[i].nombres;
		cout<<"Dni: ";cin>>club[i].dni;
		cout<<"Fecha de nacimiento: "<<endl;
		cout<<"Dia: ";cin>>club[i].fecha_nacimiento.dia;
		cout<<"Mes: ";cin>>club[i].fecha_nacimiento.mes;
		cout<<"Año: ";cin>>club[i].fecha_nacimiento.anio;
		int e=edad(club[i].fecha_nacimiento,hoy);
		if(e<=12){
			club[i].categoria="Infantil";
			cout<<"Edad: "<<e<<endl;
			cout<<"Categoria: "<<club[i].categoria<<endl;
		}else if(e>12 && e<=18){
			club[i].categoria="Juvenil";
			cout<<"Edad: "<<e<<endl;
			cout<<"Categoria: "<<club[i].categoria<<endl;
		}else{
			club[i].categoria="Mayor";
			cout<<"Edad: "<<e<<endl;
			cout<<"Categoria: "<<club[i].categoria<<endl;
		}
	}
	actualizar(club,hoy);
	int recaudacion=cal_recaudacion(club,cuota_infantiles,cuota_juveniles,cuota_mayores);
	cout<<"Recaudacion del club: "<<recaudacion;
	return 0;
}

