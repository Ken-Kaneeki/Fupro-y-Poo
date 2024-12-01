#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	vector<double> salarios;
	double tp = 0;
	double cph;
	cout << "Ingresa el costo por hora: ";
	cin >> cph;
	for (int i = 0; i < 25; i++) {
		double ht;
		cout << "Ingrese las horas trabajadas para el empleado " << i+1 << ": ";
		cin >> ht;
		double salario;
		if (ht <= 40) {
			salario = ht * cph;
		} else {
			salario = 40 * cph + (ht - 40) * cph * 1.5;
		}
		salarios.push_back(salario);
		tp += salario;
	}
	double sm = *max_element(salarios.begin(), salarios.end());
	double smi = *min_element(salarios.begin(), salarios.end());
	double sp = tp / 25;
	cout << "Salario máximo: $" << sm << endl;
	cout << "Salario mínimo: $" << smi << endl;
	cout << "Salario promedio: $" << sp << endl;
	cout << "Monto total pagado en salarios: $" << tp << endl;
	
	return 0;
}

