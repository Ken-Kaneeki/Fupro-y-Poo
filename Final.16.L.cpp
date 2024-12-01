#include <iostream>
#include <vector>
using namespace std;
int buscar(vector<string>& v,int pos,string elem){
	if(pos>=v.size()){
		return -1;
	}
	if(v[pos]==elem){
		return pos;
	}
	return buscar(v,pos+1,elem);
}
int main() {
	vector<string> v={"Hola","Mundo","Adios"};
	int pos=buscar(v,0,"Adios");
	if(pos==-1){
		cout<<"El elemento no se encontro"<<endl;
	}else{
		cout<<"El elemento se encontro en la posicion "<<pos<<endl;
	}
	return 0;
}

