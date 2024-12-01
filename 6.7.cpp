#include <iostream>
using namespace std;

int main() {
	int fecha1=19910620,fecha=19931015,resto1,resto2;
	int anio1,anio2,mes1,mes2,dia1,dia2;
	string nom1="Luis",nom2="Soledad";
	anio1=fecha1/10000;
    resto1=fecha1%10000;
	mes1=resto1/100;
	dia1=resto1%100;
	anio2=fecha/10000;
	resto2=fecha%10000;
	mes2=resto2/100;
	dia2=resto2%100;
	cout<<nom1<<"......:"<<dia1<<"/"<<mes1<<"/"<<anio1<<endl;
	cout<<nom2<<"...:"<<dia2<<"/"<<mes2<<"/"<<anio2<<endl;
	return 0;
}

