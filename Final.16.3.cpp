#include <iostream>
#include <vector>
using namespace std;
struct alum{
	string apellido;
	string nombre;
	float prom;
	int canta;
	int cantap;
};
bool ca(const alum& a, const alum& b){
	if(a.canta>b.canta){
		return true;
	}else if(a.canta==b.canta){
		if(a.cantap<b.cantap){
			return true;
		}else if(a.cantap==b.cantap){
			return a.prom>b.prom;
		}
	}
	return false;
}
int main() {
	vector<alum> mejdos(2);
	for(int i=0;i<mejdos.size();i++) { 
		cout<<"Ingrese el apellido: ";
		cin>>mejdos[i].apellido;
		cout<<"Ingrese el nombre: ";
		cin>>mejdos[i].nombre;
		cout<<"Ingrese el promedio: ";
		cin>>mejdos[i].prom;
		cout<<"Ingrese el cant materias aprobadas: ";
		cin>>mejdos[i].canta;
		cout<<"Ingrese el cant materias con aplazo: ";
		cin>>mejdos[i].cantap;
	}
	alum mej1=mejdos[0];
	alum mej2=mejdos[1];
	for(int i=1;i<3;i++) { 
		if(ca(mejdos[i],mej1)){
			mej2=mej1;
			mej1=mejdos[i];
		}else if(ca(mejdos[i],mej2)){
			mej2=mejdos[i];
		}
	}
	cout<<"Los dos mejores alumnos son: "<<endl;
	cout<<"1: "<<mej1.apellido<<", "<<mej1.nombre<<endl;
	cout<<"2: "<<mej2.apellido<<", "<<mej2.nombre<<endl;
	return 0;
}

