#include <iostream>
#include <vector>
using namespace std;
void elim(vector<int> &v,int elem){
	vector<int> nv;
	bool encon=false;
	for(int i=0;i<v.size();i++) { 
		if(v[i]==elem){
			encon=true;
		}else{
			nv.push_back(v[i]);
		}
	}
	if(encon){
		v=nv;
		cout<<"Elemento: "<<elem<<" eliminado del vector"<<endl;
	}else{
		cout<<"Elemento no a encontrado en el vector"<<endl;
	}
}
int main() {
	vector<int> mv={1,2,3,4,5};
	cout<<"Vector original: "<<endl;
	for(int num:mv){
		cout<<num<<" ";
	}
	cout<<endl;
	elim(mv,3);
	cout<<"Vector modificado: "<<endl;
	for(int num:mv){
		cout<<num<<" ";
	}
	cout<<endl;
	return 0;
}

