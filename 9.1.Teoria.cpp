#include <iostream>
#include <vector>
using namespace std;

int main() {
	int suma=0,sumapr=0;
	vector<int> estu(5);
	for(size_t i=0;i<estu.size();i++) { 
		cin>>estu[i];
	}
	int um=0;
	for(size_t i=0;i<estu.size();i++) { 
		if(estu[i]>um){
			(um=estu[i]);
		}
	}
	cout<<"Nota mayor: "<<um<<endl;
	for(size_t i=0;i<estu.size();i++) {
			suma += estu[i];
	}
	cout<<"Nota media: "<<suma/estu.size()<<endl;
	for(size_t i=0;i<estu.size();i++) {
		if(estu[i]>=60){
			sumapr++;
		}
	}
	cout<<"El porcentaje de aprobados es de: "<<sumapr<<"%";
	return 0;
}

