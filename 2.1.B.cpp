#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n,seg,tiempo1=999,tiempo2=999,ats=0;
	string nombre,g,sg;
	cin>>n;
	vector<int> met(n);
	for(int i=0;i<met.size();i++) { 
		cin>>nombre>>seg;
		cout<<"Parcipante: "<<nombre<<" hizo "<<seg<<" segundos"<<endl;
		if(seg<tiempo1){
			tiempo2=tiempo1;
			sg=g;
			tiempo1=seg;
			g=nombre;
		}else if(seg < tiempo2){
			tiempo2=seg;
			sg=nombre;
		}
	}
	cout<<"Ganador: "<<g<<" con un tiempo de "<<tiempo1<<" segundos "<<endl;
	cout<<"Segundo lugar: "<<sg<<" con un tiempo de "<<tiempo2<<" segundos "<<endl;
	for(int i=0;i<met.size();i++) { 
		if(seg <=tiempo2+5){
			ats++;
		}
	}
	cout<<"Atletas a 5 segundos o menos del segundo lugar: "<<ats<<endl;
	return 0;
}

