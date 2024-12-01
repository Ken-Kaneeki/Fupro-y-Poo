#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct ejer {
	string nombre;
	string enun;
	int punt;
	float difi;
};
int be(const vector<ejer>& ejers, const string& nombre) {
	for (size_t i = 0; i < ejers.size(); ++i) {
		if (ejers[i].nombre == nombre) {
			return i;
		}
	}
	return -1;
}

int main() {
	vector<ejer> ejers = {
		{"Ejercicio 1", "Enunciado del ejercicio 1", 20, 3.5},
	{"Ejercicio 2", "Enunciado del ejercicio 2", 15, 2.0},
		{"Ejercicio 3", "Enunciado del ejercicio 3", 25, 4.5},
	{"Ejercicio 4", "Enunciado del ejercicio 4", 30, 5.0},
		{"Ejercicio 5", "Enunciado del ejercicio 5", 10, 1.5}
	};
	string nombre;
	int sp = 0;
	float sd = 0;
	int ce = 0;
	cout << "Ingrese nombres de ejercicios para confeccionar el examen (Deje en blanco para finalizar): "<<endl;
	while (true) {
		cout << "Nombre del ejercicio: ";
		getline(cin, nombre);
		if (nombre.empty()) {
			break; 
		}
		int posicion = be(ejers, nombre);
		if (posicion != -1) {
			cout << "Ejercicio encontrado: ";
			cout << "Nombre: " << ejers[posicion].nombre << endl;
			cout << "Enunciado: " << ejers[posicion].enun << endl;
			cout << "Puntaje: " << ejers[posicion].punt << endl;
			cout << "Dificultad: " << ejers[posicion].difi << endl;
			sp += ejers[posicion].punt;
			sd += ejers[posicion].difi;
			ce++;
		} else {
			cout << "Ejercicio no encontrado"<<endl;
		}
	}
	float difip = sd / ce;
	cout << "Dificultad promedio del examen: " << difip << endl;
	if (sp != 100) {
		cout << "¡Atencion! Los puntos seleccionados no suman 100";
	}
	return 0;
}

