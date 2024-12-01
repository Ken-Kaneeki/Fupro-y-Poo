#include <iostream>
#include <vector>
using namespace std;
void en_orden(vector<string>& nombre){
	for(int i=0;i<nombre.size();++i) { 
		if(nombre[i]=="Alba" || nombre[i]=="Marta" || nombre[i]=="Luisa" ){
			nombre[i]=" ";
		}
		cout<<nombre[i]<<" ";
	}
}
int main() {
	vector<string> nombres{"Carlos","Alba","Cintia","Saul","Zoe","Luisa","Marta"};
	for(int i=0;i<nombres.size();i++) { 
		cout<<nombres[i]<<" ";
	}
	cout<<endl;
	en_orden(nombres);
	return 0;
}

