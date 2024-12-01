#include <iostream>
#include <vector>
using namespace std;
struct vr{
	int valor;
	int repes;
};
vector<vr> cr(const vector<int>& v){
	vector<vr> resul;
	for(int num:v){
		bool encon=false;
		for(vr& dato:resul){
			if(dato.valor==num){
				dato.repes++;
				encon=true;
				break;
			}
		}
		if(!encon){
			vr nvd={num,1};
			resul.push_back(nvd);
		}
	}
	return resul;
}
int main() {
	vector<int> nume={1,2,1,3,2,1,4,4,1,5,5,6,7,7,7,8,9,9,9,9,10,10};
	vector<vr> result=cr(nume);
	for(const vr& dat:result){
		cout<<"Valor: "<<dat.valor<<endl<<"Repeticiones: "<<dat.repes<<endl;
	}
	return 0;
}

