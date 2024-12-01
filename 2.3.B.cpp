#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	string nombre,nai;
	vector<string> alf(100);
	for(int i=0;i<alf.size();i++) { 
		cin>>nombre;
		if(nombre=="A"){
			break;
		}
		alf.push_back(nombre);
	}
	cin>>nai;
	alf.push_back(nai);
	sort(alf.begin(),alf.end());
	cout<<"--------"<<endl;
	for(const auto& nomb:alf){
		cout<<nomb<<endl;
	}
	return 0;
}

