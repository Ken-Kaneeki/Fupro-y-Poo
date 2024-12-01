#include <iostream>
#include <vector>
using namespace std;
void rfil(vector<vector<float>>& matriz, int f1, int f2) {
	int numc = matriz[0].size();
	vector<float> proms(numc, 0.0f);
	for (int i = f1; i <= f2; ++i) {
		for (int j = 0; j < numc; ++j) {
			proms[j] += matriz[i][j];
		}
	}
	int nfap = f2 - f1 + 1;
	for (int j = 0; j < numc; ++j) {
		proms[j] /= nfap;
	}
	for (int i = f1; i <= f2; ++i) {
		matriz[i] = proms;
	}
}
void impm(const vector<vector<float>>& matriz) {
	for (const auto& fila : matriz) {
		for (float valor : fila) {
			cout << valor << "\t";
		}
		cout << endl;
	}
}
int main() {
	vector<vector<float>> matriz = {
		{1.0, 2.0, 3.0},
	{4.0, 5.0, 6.0},
		{7.0, 8.0, 9.0},
	{10.0, 11.0, 12.0},
		{13.0, 14.0, 15.0}
	};
	cout << "Matriz original: "<<endl;
	impm(matriz);
	int f1 = 1;
	int f2 = 3;
	rfil(matriz, f1, f2);
	cout << "Matriz modificada (Filas " << f1 << " a " << f2 << " reemplazadas por promedios): "<<endl;
	impm(matriz);
	return 0;
}
