#include <iostream>
using namespace std;

int main() {
	float pienm=0.3048;
	int pie;
	cout<<"Ingrese los pies a calcular: ";
	cin>>pie;
	float resul=pie*pienm;
	cout<<pie<<" pie/es "<<"equivalen a: "<<resul<<" metros"<<endl;
	return 0;
}

