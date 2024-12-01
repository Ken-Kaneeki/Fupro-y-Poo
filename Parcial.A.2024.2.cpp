#include <iostream>
#include <array>
using namespace std;
const int nh= 10;
const int nm = 12;
struct gast {
	int ch;
	int dia;
	int mes;
	double monto;
};
void id(const array<array<double, nm>, nh>& gasts, const array<double, nh>& presup) {
	cout << "Hospitales con deficit al finalizar el año:" << endl;
	for (int i = 0; i < nh; ++i) {
		double tgast = 0;
		for (double gast : gasts[i]) {
			tgast += gast;
		}
		if (tgast > presup[i]) {
			cout << "Hospital " << i + 1 << " con deficit de " << tgast - presup[i] << endl;
		}
	}
}
void igma(const array<array<double, nm>, nh>& gasts) {
	cout << "Hospitales con gastos mayor al mes anterior por cada mes:" << endl;
	for (int mes = 1; mes < nm; ++mes) {
		int cont = 0;
		for (int i = 0; i < nh; ++i) {
			if (gasts[i][mes] > gasts[i][mes - 1]) {
				cont++;
			}
		}
		cout << "Mes " << mes + 1 << ": " << cont << " hospitales" << endl;
	}
}
void imgh(const array<array<double, nm>, nh>& gasts, int ch) {
	int mmg = 0;
	double mg = 0;
	
	for (int mes = 0; mes < nm; ++mes) {
		if (gasts[ch - 1][mes] > mg) {
			mg = gasts[ch - 1][mes];
			mmg = mes;
		}
	}
	
	cout << "El mes de mayor gasto del hospital " << ch << " fue " << mmg + 1 << " con un monto de " << mg << endl;
}
int main() {
	array<double, nh> presup;
	cout << "Ingrese los presupuestos anuales de los hospitales:" << endl;
	for (int i = 0; i < nh; ++i) {
		cout << "Codigo del hospital (1-10): ";
		int ch;
		cin >> ch;
		cout << "Presupuesto anual: ";
		cin >> presup[ch - 1];
	}
	array<array<double, nm>, nh> gasts{};
    cout << "Ingrese los gastos efectuados por los hospitales (cod. hospital 0 para terminar):" << endl;
	while (true) {
		gast gast;
		cout << "Codigo del hospital: ";
		cin >> gast.ch;
		if (gast.ch == 0) break;
		cout << "Dia: ";
		cin >> gast.dia;
		cout << "Mes: ";
		cin >> gast.mes;
		cout << "Monto: ";
		cin >> gast.monto;
		gasts[gast.ch - 1][gast.mes - 1] += gast.monto;
	}
	return 0;
}

