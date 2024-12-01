#include <iostream>
using namespace std;
int edad(int hoy,int nac){
	int anio1,anio2;
	anio1=hoy/10000;
	anio2=nac/10000;
	int eda=anio1-anio2;
	return eda;
}
int main() {
	
	return 0;
}

