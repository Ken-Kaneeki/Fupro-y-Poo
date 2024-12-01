#include <iostream>
#include <matrix>
#include <iomanip>
using namespace std;
matrix<int> generar_matriz(int n, int m) {
	matrix<int> A(n,m);
	for(size_t i = 0; i<A.size(0); ++i)
		for(size_t j = 0; j<A.size(1); ++j)
		A[i][j] = rand()%101;
		return A;
}
void muestra_matriz(const matrix<int> &A) {
	for(size_t i = 0; i<A.size(0); ++i) {
		for(size_t j = 0; j<A.size(1); ++j)
			cout << setw(5) << A[i][j];
			cout << endl;
	}
}
pair<int,int> Mayor(const matrix<int> &A){
	int Pos1,Pos2,Res=0;
	for(size_t i=0;i<A.size(0);i++) { 
		for(size_t j=0;j<A.size(1);j++) { 
			if(A[i][j]>Res){
				Res=A[i][j];
				Pos1=i;
				Pos2=j;
			}
		}
	}
	return {Pos1,Pos2};
}
int main() {
	int n, m;
	cin >> n >> m;
	matrix<int> A = generar_matriz(n,m);
	muestra_matriz(A);
	pair<int,int> mayor=Mayor(A);
	cout<<mayor.first<<" "<<mayor.second<<endl;
	return 0;
}

