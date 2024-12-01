#include <iostream>
#include <vector>
using namespace std;
pair<bool, int> ieo(vector<int>& v, int x) {
	int izq = 0;
	int dere = v.size() - 1;
	int pos = -1;
	while (izq <= dere) {
		int med = izq + (dere - izq) / 2;
		if (v[med] == x) {
			return make_pair(false, med);
		} else if (v[med] > x) {
			izq = med + 1;
		} else {
			dere = med - 1;
		}
	}
	pos = izq;
	v.insert(v.begin() + pos, x);
	return make_pair(true, pos);
}
int main() {
	vector<int> arr = {10, 8, 6, 4, 2};
	int ele = 5;
	cout << "Arreglo original:";
	for (int num : arr) {
		cout << " " << num;
	}
	cout << endl;
	auto resul = ieo(arr, ele);
	if (resul.first) {
		cout << "Se inserto el elemento " << ele << " en la pos " << resul.second << "." << endl;
	} else {
		cout << "El elemento " << ele << " ya estaba presente en la pos " << resul.second << "." << endl;
	}
	cout << "Arreglo modificado:";
	for (int num : arr) {
		cout << " " << num;
	}
	cout << endl;
	return 0;
}

