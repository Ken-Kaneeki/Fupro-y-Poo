#include <iostream>
#include <vector>
#include "matrix"
using namespace std;
void intercambio(int &a,int &b){
int temp=a;
a=b;
b=temp;
}
void f1(matrix<int>& paim){
    int cont=0;
for(size_t i=0;i<paim.size(0);i++){
    for(size_t j=0;j<paim.size(1);j++){
        if(paim[i][j]%2==0){
           intercambio(paim[cont/paim.size(0)][cont%paim.size(0)],paim[i][j]);
           cont++;
        }
    }
}
}
void f2(matrix<int>& paim,int filas,int &pares,int &impares,float &promedio){
    pares=0;
    impares=0;
    int suma=0;
    for(size_t i=0;i<paim.size(0);i++){
        if(paim[filas][i]%2==0){
            pares++;
        }else{
            impares++;
        }
        suma+=paim[filas][i];
    }
    promedio=suma/(1.0*paim.size(0));
}
int main() {
int pares,impares;
float promedio;
matrix<int> pi(6,6);
cout<<"Matriz original: "<<endl;
for(size_t i=0;i<pi.size(0);i++){
    for(size_t j=0;j<pi.size(1);j++){
        pi[i][j]=rand()%50;
        cout<<pi[i][j]<<" ";
    }
    cout<<endl;
}
f1(pi);
cout<<endl;
cout<<"Matriz modificada (F1): "<<endl;
for(size_t i=0;i<pi.size(0);i++){
    for(size_t j=0;j<pi.size(1);j++){
        cout<<pi[i][j]<<" ";
    }
    cout<<endl;
}
f2(pi,0,pares,impares,promedio);
cout<<"Resultados (F2): "<<endl;
cout<<"Cantidad de pares: "<<pares<<endl;
cout<<"Cantidad de impares: "<<impares<<endl;
cout<<"Promedio: "<<promedio<<endl;
return 0;
}