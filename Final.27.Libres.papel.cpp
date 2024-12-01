#include <iostream>
#include <vector>
using namespace std;
struct valores{
    int valor,cantidad;
};
void buscarins(vector<valores>& x,int val){
    for(int i=0;i<x.size();i++){
        if(x[i].valor==val){
            x[i].cantidad++;
            return;
        }
    }
    valores nuevo;
    nuevo.valor=val;
    nuevo.cantidad=1;
    x.push_back(nuevo);
    for (int i=0;i<x.size()-1;i++) {
     for (int j=0; j<x.size()-i-1;j++) {
        if (x[j].valor>x[j+1].valor) {
            valores temp=x[j];
            x[j]=x[j+1];
            x[j+1] =temp;
        }
     }
    }
}
vector<valores> cant(const vector<int>& v){
    vector<valores> x;
    for(int i=0;i<v.size();i++){
       buscarins(x,v[i]);
    }
    return x;
}
int main() {
vector<int> v={80,20,80,30,40,30,80};
vector<valores> resultados=cant(v);
cout<<"Valor/Cantidad: "<<endl;
for(int i=0;i<resultados.size();i++){
    cout<<"("<<resultados[i].valor<<"-"<<resultados[i].cantidad<<")"<<endl;
}
return 0;
}