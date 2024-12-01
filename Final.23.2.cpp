#include <iostream>
#include <matrix>
using namespace std;
struct fecha{
	int dia;
	int mes;
	int anio;
};
int main() {
	int n;
	cin>>n;
	vector<fecha> fe(8);
	for(int i=0;i<fe.size();i++) { 
		cout<<"Dia: ";
		cin>>fe[i].dia;
		cout<<"Mes: ";
		cin>>fe[i].mes;
		cout<<"Año: ";
		cin>>fe[i].anio;
		cout<<"Fecha TP "<<i+1<<": "<<fe[i].dia<<"/"<<fe[i].mes<<"/"<<fe[i].anio<<endl;
	}
	matrix<string> tps(n,fe.size()," ");
	vector<vector<int>> tpa(n);
	for(size_t i=0;i<tps.size(0);i++) { 
		cout<<"El alumno "<<i+1<<": ";
		for(size_t j=0;j<tps.size(1);j++) { 
			char aprob;
			do{
				cout<<"¿Aprobo el TP "<<j+1<<"?: ";
				cin>>aprob;
			} while(aprob != 'S' && aprob!= ' ');
			if(aprob=='S'){
				tpa[i].push_back(j);
			}
		}
		
	}
	cout<<"Matriz de aprobados: "<<endl;
	for(size_t i=0;i<tps.size(0);i++) { 
		cout<<"Alumno "<<i+1<<":"<<endl;
		for(int tp : tpa[i]) { 
			cout<<"TP "<<tp+1<<" "<<endl;
		}
	}
	vector<int> aptp(fe.size(),0);
	for(int j=0;j<fe.size();j++) { 
		for(int i=0;i<n;i++) { 
			if(tps[i][j]=="NO"){
				aptp[j]++;
			}
		}
	}
	int min1=n+1,min2=n+1;
	int idx1=-1,idx2=-1;
	for(int i=0;i<fe.size();i++) { 
		if(aptp[i]<min1){
			min2=min1;
			idx2=idx1;
			min1=aptp[i];
			idx1=i;
		}else if(aptp[i]<min2){
			min2=aptp[i];
			idx2=i;
		}
	}
    cout<<"Los dos Tps menos aprobados son: ";
    cout<<"TP "<<idx1+1<<": "<<aptp[idx1]<<" aprobados"<<endl;
    cout<<"TP "<<idx2+1<<": "<<aptp[idx2]<<" aprobados"<<endl;


	return 0;
}

