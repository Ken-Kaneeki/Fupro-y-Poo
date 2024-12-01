#include <iostream>
#include <matrix>
#include <vector>
using namespace std;
void maximo(matrix<int>& mayor){
	int max1=-1,max2=-1,fila1=-1,fila2=-1;
	for(size_t i=0;i<mayor.size(0);i++) {
		int suma=0;
		for(size_t j=0;j<mayor.size(1);j++) { 
			suma +=mayor[i][j];
		}
		if(suma>max1){
			max2=max1;
			fila2=fila1;
			max1=suma;
			fila1=i;
		}else if(suma>max2){
			max2=suma;
			fila2=i;
		}
	}
	if(fila1!=0){
		swap(mayor[0],mayor[fila1]);
	}
	if(fila2!=1){
		swap(mayor[1],mayor[fila2==0?fila1:fila2]);
	}
}
int main() {
	matrix<int> mayores(5,5);
	cout<<"Matriz original: "<<endl;
	for(size_t i=0;i<mayores.size(0);i++) {
		cout<<endl;
		for(size_t j=0;j<mayores.size(1);j++) { 
			mayores[i][j]=rand()%101-1;
			cout<<mayores[i][j]<<" ";
		}
	}
	cout<<endl;
	maximo(mayores);
	cout<<endl;
	cout<<"Matriz modificada: "<<endl;
	for(size_t i=0;i<mayores.size(0);i++) {
		cout<<endl;
		for(size_t j=0;j<mayores.size(1);j++) { 
			cout<<mayores[i][j]<<" ";
		}
	}
	return 0;
}

