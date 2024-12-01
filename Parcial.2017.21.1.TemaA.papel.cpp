#include <iostream>
#include <vector>
using namespace std;
int prom(const vector<int>& valores){
    float suma=0;
    for(size_t i=0;i<valores.size();i++){
        suma+=valores[i];
    }
    float promedio=suma/valores.size();
    int cont=0;
    for(size_t i=0;i<valores.size();i++){
    if(valores[i]>promedio){
        cont++;
    }
    }
    return cont;
}
int main() {
int valor;
vector<int> valores;
while(true){
    cout<<"Ingrese el valor: ";cin>>valor;
    if(valor==-1)break;
    valores.push_back(valor);
}
cout<<"Valores originales: "<<endl;
for(size_t i=0;i<valores.size();i++){
    cout<<valores[i]<<endl;
}
int promedi=prom(valores);
valores.push_back(0);
for(size_t i=valores.size()-1;i>0;i--){
    valores[i]=valores[i-1];
}
valores[0]=promedi;
cout<<"Valores con el promedio agregado: "<<endl;
for(size_t i=0;i<valores.size();i++){
    cout<<valores[i]<<endl;
}
return 0;
}