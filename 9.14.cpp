#include <iostream>
using namespace std;
struct complejo {
	double real;
	double imag;
};
complejo suma(const complejo& c1, const complejo& c2) {
	complejo rso;
	rso.real = c1.real + c2.real;
	rso.imag = c1.imag + c2.imag;
	return rso;
}
complejo resta(const complejo& c1, const complejo& c2) {
	complejo rso;
	rso.real = c1.real - c2.real;
	rso.imag = c1.imag - c2.imag;
	return rso;
}
complejo multi(const complejo& c1, const complejo& c2) {
	complejo rso;
	rso.real = c1.real * c2.real - c1.imag * c2.imag;
	rso.imag = c1.real * c2.imag + c1.imag * c2.real;
	return rso;
}

int main() {
	complejo c1, c2, rso;
	int op;
	cout << "Ingrese la parte real del primer numero complejo: ";
	cin >> c1.real;
	cout << "Ingrese la parte imaginaria del primer numero complejo: ";
	cin >> c1.imag;
	cout<<endl;
	cout << "Ingrese la parte real del segundo numero complejo: ";
	cin >> c2.real;
	cout << "Ingrese la parte imaginaria del segundo numero complejo: ";
	cin >> c2.imag;
	cout<<endl;
	cout << "Seleccione la operación a realizar:" << endl;
	cout << "1. Suma" << endl;
	cout << "2. Resta" << endl;
	cout << "3. Multiplicación" << endl;
	cout << "Opción: ";
	cin >> op;
	
	switch(op) {
	case 1:
		rso = suma(c1, c2);
		cout << "Resultado de la suma: " << rso.real << " + " << rso.imag << "i" << endl;
		break;
	case 2:
		rso = resta(c1, c2);
		cout << "Resultado de la resta: " << rso.real << " - " << rso.imag << "i" << endl;
		break;
	case 3:
		rso = multi(c1, c2);
		cout << "Resultado de la multiplicación: " << rso.real << " * " << rso.imag << "i" << endl;
		break;
	default:
		cout << "Opción no válida" << endl;
		break;
	}
	
	return 0;
}
