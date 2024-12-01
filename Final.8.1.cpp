#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
bool vcon(const string& con) {
	const unordered_map<string, bool> coni = {
		{"1234", true},
	{"asdf", true},
		{"pass", true},
	{"", true}
	};
	if (coni.find(con) != coni.end()) {
		return false;
	}
	return true;
}
int main() {
	unordered_map<string, string> users;
	string nombre, con;
	cout << "Ingrese los datos de los usuarios validos(Nombre y contraseña).Ingrese 'ZZZ' para finalizar: "<<endl;
	while (true) {
		cout << "Nombre: ";
		cin >> nombre;
		if (nombre == "ZZZ") break;
		while (true) {
			cout << "Contraseña: ";
			cin >> con;
			if (vcon(con)) {
				users[nombre] = con;
				break;
			} else {
				cout << "Contraseña inválida.Por favor, intente de nuevo";
				cout<<endl;
			}
		}
	}
	int intf = 0;
	const int maxi = 5;
	cout << "Por favor, identifiquese: "<<endl;
	while (intf < maxi) {
		cout << "Nombre: ";
		cin >> nombre;
		cout << "Contraseña: ";
		cin >> con;
		if (users.find(nombre) != users.end() && users[nombre] == con) {
			cout << "Bienvenido al sistema Sr." << nombre << endl;
			return 0;
		} else {
			intf++;
			cout << "Acceso denegado. Intentos fallidos: " << intf << endl;
		}
	}
	cout << "Fuera bicho!" << endl;
	return 0;
}

