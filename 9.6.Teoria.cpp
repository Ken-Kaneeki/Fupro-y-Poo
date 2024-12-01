#include <iostream>
using namespace std;
struct fecha{
	int dia;
	int anio;
	int mes;
};
int main() {
	fecha hoy;
	hoy.dia=30;
	hoy.mes=07;
	hoy.anio=2024;
	cout<<"Hoy es: "<<hoy.dia<<"/"<<hoy.mes<<"/"<<hoy.anio<<endl;
	return 0;
}

