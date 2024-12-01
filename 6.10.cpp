#include <iostream>
using namespace std;

int main() {
	string nombre,apellido;
	int sb,sbb,anio,mp,ap,ob,ag,dni,ec,p,sbt,cosh=40,cose=30,canh,cane,tph,tpe,rsb,tpec;
	float antiguedad=1.2;
	cout<<"Ingrese el nombre: ";
	cin>>nombre;
	cout<<"Ingrese el apellido: ";
	cin>>apellido;
	cout<<"Ingrese el dni: ";
	cin>>dni;
	cout<<"Ingrese su estado civil: ";
	cin>>ec;
	cout<<"Ingrese el sueldo basico: ";
	cin>>sb;
	cout<<"Ingrese los años de antiguedad: ";
	cin>>anio;
	cout<<"Ingrese si cobra presentismo: ";
	cin>>p;
	sbb=sb*(anio*antiguedad)+sb;
	ap=(sb*11)/100;
	cout<<"Dinero a restar debido al aporte jubilatorio: "<<ap<<" pesos"<<endl;
	ob=(sb*3)/100;
	cout<<"Dinero a restar debido a la obra social: "<<ob<<" pesos"<<endl;
	ag=(sb*1)/100;
	cout<<"Dinero a restar debido al aporte gremial: : "<<ag<<" pesos"<<endl;
	cout<<"Su nombre es: "<<nombre<<endl;
	cout<<"Su apellido es: "<<apellido<<endl;
	cout<<"Su DNI es: "<<dni<<endl;
	cout<<"Sueldo basico bonificado: "<<sbb<<endl;
	rsb=ap+ob+ag;
	sbt=sbb-rsb;
	if(p==1){
		mp=(sb*10/1000)/100;
		cout<<"Su porcentaje de presentismo es: "<<mp<<"%"<<endl;
	} else if (p==0){
		cout<<"No cobra presentismo"<<endl;
	}
	if(ec==1){
		cout<<"Ingrese la cantidad de esposas: ";
		cin>>cane;
		cout<<"Ingrese la cantidad de hijos: ";
		cin>>canh;
		tph=cosh*canh;
		tpe=cose*cane;
		tpec=tph+tpe;
		cout<<"Debe pagar por hijos y esposa/as: "<<tpec<<endl;
		cout<<"Sueldo total a cobrar: "<<sbt+tpec<<endl;
	} else if(ec==0) {
		cout<<"Su estado civil es soltero"<<endl;
		cout<<"Sueldo total a cobrar: "<<sbt<<endl;
	};

	return 0;
}

