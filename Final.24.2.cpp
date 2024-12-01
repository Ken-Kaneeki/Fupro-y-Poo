#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct postulante{
	string alumno;
	int cod;
	int dni;
	int cant_aprob;
	int cant_insuf;
	float prom;
};
vector<postulante> aa(vector<postulante>& v,float& pna){
	vector<postulante> aprob;
	int tna=0;
	for(const auto& alum:v){
		if(alum.cant_aprob>=1&&alum.cant_insuf<=3){
			aprob.push_back(alum);
		}else{
			tna++;
		}
	}
	pna=(static_cast<float>(tna)/v.size())*100;
	return aprob;
}
bool cpp(const postulante& a,const postulante &b){
	return a.prom>b.prom;
}
void mma(vector<postulante>& b){
	vector<postulante> mea;
	for(const auto& alumn:b){
		if(alumn.cant_aprob>=1&&alumn.cant_insuf<=3){
			mea.push_back(alumn);
		}
	}
	sort(mea.begin(),mea.end(),cpp);
	int cont=0;
	for(const auto& aluumn:mea){
		cout<<"----------------------"<<endl;
		cout<<"Nombre: "<<aluumn.alumno<<endl;
		cout<<"Dni: "<<aluumn.dni<<endl;
		cout<<"Promedio: "<<aluumn.prom<<endl;
		cout<<"----------------------"<<endl;
		cont++;
		if(cont==2){
			break;
		}
	}
}
int main() {
	int n,e;
	float nota,pnaa=0.0;
	cin>>n>>e;
	vector<postulante> v(n);
	vector<float> ex(e);
	for(int i=0;i<v.size();i++) {
		cin.ignore();
		cout<<"Ingrese el apellido y nombre del alumno: ";getline(cin,v[i].alumno);
		cout<<"Ingrese el codigo: ";
		cin>>v[i].cod;
		cout<<"Ingrese el dni: ";
		cin>>v[i].dni;
		v[i].cant_aprob=0;
		v[i].cant_insuf=0;
		v[i].prom=0.0;
		for(int j=0;j<ex.size();j++) { 
			cout<<"Examen "<<j+1<<":";
			cin>>nota;
			if(nota>=6){
				v[i].cant_aprob++;
			}else{
				v[i].cant_insuf++;
			}
			v[i].prom=(v[i].prom*j+nota)/(j+1);
		}
		cout<<"-----------------------"<<endl;
	}
	cout<<"-----------------------"<<endl;
	for(int i=0;i<v.size();i++) { 
		cout<<"Alumno: "<<v[i].alumno<<endl;
		cout<<"Materias aprobadas: "<<v[i].cant_aprob<<endl;
		cout<<"Materias insuficientes: "<<v[i].cant_insuf<<endl;
		cout<<"Promedio: "<<v[i].prom<<endl;
		cout<<"-----------------------"<<endl;
	}
	vector<postulante> becaa=aa(v,pnaa);
	cout<<"Alumnos que obtuvieron la beca: "<<endl;
	for(const auto& alum:becaa){
		cout<<"Alumno: "<<alum.alumno<<endl;
	}
	cout<<"Porcentaje que no obtuvo la beca: "<<pnaa<<"%"<<endl;
	mma(v);
	return 0;
}

