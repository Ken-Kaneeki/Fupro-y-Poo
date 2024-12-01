#include <iostream>
#include <vector>
using namespace std;
struct ficha{
    int dni;
    float altura;
};
void ordenar(vector<ficha>& v){
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
         if(v[i].altura==v[j].altura && v[i].dni<v[j].dni){
           ficha temp=v[i];
           v[i]=v[j];
           v[j]=temp;
         }
        }
    }
}
int main() {
vector<ficha> alturas;
while(true){
    ficha height;
    cout<<"Ingrese el dni: ";cin>>height.dni;
    if(height.dni==0)break;
    cout<<"Ingrese la altura: ";cin>>height.altura;
    alturas.push_back(height);
}
ordenar(alturas);
cout<<"Personas ordenadas: "<<endl;
for(int i=0;i<alturas.size();i++){
    cout<<"DNI: "<<alturas[i].dni<<endl;
    cout<<"Altura: "<<alturas[i].altura<<endl;
}
return 0;
}