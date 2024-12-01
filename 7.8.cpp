#include <iostream>
using namespace std;

int main() {
	int fecha1,fecha2;
	cin>>fecha1>>fecha2;
	int anio1,anio2;
	anio1=fecha1/10000;
	anio2=fecha2/10000;
	int dif=anio2-anio1;
	cout<<dif<<endl;
	if(dif>=18){
		cout<<"La persona es mayor de edad y puede votar"<<endl;
	}else{
		cout<<"La persona es menor de edad y no puede votar"<<endl;
	}
	return 0;
}

