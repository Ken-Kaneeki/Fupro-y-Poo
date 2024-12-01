#include <iostream>
#include <vector>
using namespace std;
struct Licencia{
    string software,lic;
    float costo;
};
float calcular_costos(vector<Licencia>& prog,vector<int>& cant){
    float cost=0;
    for(int i=0;i<prog.size();i++){
        cost+=prog[i].costo*cant[i];
    }
    return cost;
}
int main() {
int n;
cout<<"Ingrese el tamaño de los vectores: ";cin>>n;
vector<Licencia> programas(n);
vector<int> cantidades(n);
for(int i=0;i<n;i++){
    cout<<"Nombre del software: ";cin>>programas[i].software;
    cout<<"Nombre de la licencia: ";cin>>programas[i].lic;
    cout<<"Costo de la licencia: ";cin>>programas[i].costo;
    cout<<"Ingrese la cantidad a comprar: ";cin>>cantidades[i];
}
float total=calcular_costos(programas,cantidades);
cout<<"Costo total $"<<total<<endl;
return 0;
}