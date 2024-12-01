#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;
struct event {
	string tipo;
	int jg;
};
unordered_map<string, int> resu_part(const vector<event>& events, int jg) {
	unordered_map<string, int> resu;
	for (const auto& event : events) {
		if (event.jg == jg) {
			resu[event.tipo]++;
		}
	}
	return resu;
}
int main() {
	vector<event> events;
	string tipoevent;
	int jg;
	cout << "Ingrese los eventos del partido (Tipo de evento,jugador 1 o 2, ingrese 'fin' para terminar): "<<endl;
	while (true) {
		cout << "Tipo de evento: ";
		cin >> tipoevent;
		if (tipoevent == "fin") break;
		cout << "Jugador (1 o 2): ";
		cin >> jg;
		if (jg == 1 || jg == 2) {
			events.push_back({tipoevent, jg});
		} else {
			cout << "Numero de jugador invalido. Debe ser 1 o 2 ";
		}
	}
	unordered_map<string, int> resujg1 = resu_part(events, 1);
	unordered_map<string, int> resujg2 = resu_part(events, 2);
	cout << "Resumen del jugador 1: ";
	for (const auto& par : resujg1) {
		cout << par.first << ": " << par.second << endl;
	}
	cout << "Resumen del jugador 2: ";
	for (const auto& par : resujg2) {
		cout << par.first << ": " << par.second << endl;
	}
	return 0;
}

