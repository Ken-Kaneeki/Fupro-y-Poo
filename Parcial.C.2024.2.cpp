#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
struct atl {
	int cod;
	string nombre;
	int vic;
	int seg;
	
	atl(int cod, const string& nom)
		: cod(cod), nombre(nom), vic(0), seg(0) {}
};
atl& enat(vector<atl>& atls, int cod) {
	auto it = find_if(atls.begin(), atls.end(),
					  [cod](const atl& a) { return a.cod == cod; });
	return *it;
}
void lr(vector<atl>& atls) {
	int cod, hh, mm, ss;
	while (true) {
		cin >> cod;
		if (cod == 0)
			break;
		cin >> hh >> mm >> ss;
		atl& atl = enat(atls, cod);
		if (hh == 0 && mm == 0 && ss == 0) {
			atl.seg++;
		} else {
			atl.vic++;
		}
	}
}
int atls(vector<atl>& atls) {
	sort(atls.begin(), atls.end(),
	[](const atl& a, const atl& b) {
	    if (a.vic != b.vic)
			return a.vic > b.vic;
			else
			return a.seg > b.seg;
		 });
	return atls[0].cod;
}
int main() {
	vector<atl> atls1;
	cout << "Ingrese los nombres y codigos de los 8 atletas:" << endl;
	for (int i = 0; i < 8; ++i) {
		int cod;
		string nombre;
		cin >> cod >> nombre;
		atls1.push_back(atl(cod, nombre));
	}
	cout << "Ingrese los resultados de las 20 pruebas:" << endl;
	for (int i = 0; i < 20; ++i) {
		lr(atls1);
	}
	int codSeleccionado = atls(atls1);
	
	
	cout << "El atleta seleccionado para el torneo internacional es el codigo: " << codSeleccionado << endl;
	
	return 0;
}

