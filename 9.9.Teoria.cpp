#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct equipo{
	string nombre;
	int pr;
	int p;
};
bool ce(const equipo& a,const equipo& b){
	if(a.pr!=b.pr){
		return a.pr>b.pr;
	}
	return b.pr>a.pr;
}
	vector<string> ec(vector<equipo> equipos){
		sort(equipos.begin(),equipos.end(),ce);
		vector<string> c;
		for(int i=0;i<2;++i) {
			c.push_back(equipos[i].nombre);
		}
		return c;
	}
int main() {
	vector<equipo> equipos={
	{"Equipo 1 ",2,150},
	{"Equipo 2 ",7,145},
	{"Equipo 3 ",4,125},
	{"Equipo 4 ",3,130},
	{"Equipo 5 ",6,120}
	};
	vector<string> c=ec(equipos);
	cout<<"Equipos clasificados a la estancia nacional: "<<endl;
	for(const auto& equipo : c){
		cout<<equipo<<endl;
	}
	return 0;
}

