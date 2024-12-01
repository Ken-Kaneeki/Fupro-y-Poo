#include <iostream>
#include <vector>
using namespace std;
struct producto{
	int cod;
	string descr;
	int cant;
};
int main() {
	vector<producto> stock;
	int cod,cant;
	string descr;
	while(cin>>cod>>descr>>cant){
		if(cod==0){
			break;
		}
		stock.push_back({cod,descr,cant});
	}
	cout<<"Ingrese las ventas: "<<endl;
	while(cin>>cod>>cant){
		if(cod==0){
			break;
		}
		for(auto& produc:stock){
			if(produc.cod==cod){
				produc.cant-=cant;
				break;
			}
		}
	}
	int limite;
	cout<<"Ingrese el limite de stock: ";cin>>limite;
	cout<<"Productos con stock bajo: "<<endl;
	for(auto& produc:stock){
		if(produc.cant<limite){
			cout<<"Codigo: "<<produc.cod<<", Descripcion: "<<produc.descr<<", Cantidad: "<<produc.cant<<endl;
		}
	}
	return 0;
}

