#include <iostream>
#include <vector>
#include "matrix"
using namespace std;
int main() {
int monto_fijo=100000;
matrix<int> rural(10,12);
while(true){
    int codigo_escuela,mes,dia,año,monto;
    cout<<"Codigo de escuela: ";cin>>codigo_escuela;
    if(codigo_escuela==0){
        break;
    }
    cout<<"Dia: ";cin>>dia;
    cout<<"Mes: ";cin>>mes;
    cout<<"Año: ";cin>>año;
    cout<<"Monto: ";cin>>monto;
    rural[codigo_escuela-1][mes-1] +=monto;
}
vector<int> sobrantes(10);
int febrero=0,octubre=1,min_octubre=rural[0][9];
for(int i=0;i<10;i++){
    int total_gastado=0;
    for(int j=0;j<12;j++){
        total_gastado+=rural[i][j];
    }
    sobrantes[i]=12*monto_fijo-total_gastado;
    if(rural[i][1]==monto_fijo){
        febrero++;
    }
    if(rural[i][9]<min_octubre){
        min_octubre=rural[i][9];
        octubre=i+1;
    }
}
cout<<"Dinero que le sobro a cada escuela: "<<endl;
for(int i=0;i<10;i++){
    cout<<"Escuela: "<<i+1<<": $"<<sobrantes[i]<<endl;
}
cout<<"Cantidad de escuelas que gastaron todo en febrero: "<<febrero<<endl;
cout<<"Escuela que menos gasto en octubre: "<<octubre<<endl;
return 0;
}