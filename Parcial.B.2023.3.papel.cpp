#include <iostream>
#include <vector>
using namespace std;
struct colectivo{
    string patente;
    int ckm,cpasajeros;
};
void cmpasajeros(const vector<colectivo> &cole,string& patente1,string& patente2){
    int pasajeros1=99999,pasajeros2=99999;
    for(int i=0;i<cole.size();i++){
        if(cole[i].cpasajeros<pasajeros1){
            pasajeros2=pasajeros1;
            patente2=patente1;
            pasajeros1=cole[i].cpasajeros;
            patente1=cole[i].patente;
        }else{
            pasajeros2=cole[i].cpasajeros;
            patente2=cole[i].patente;
        }
    }
}
float promediokm(const vector<colectivo> &cole){
    float totalkms=0;
    for(const auto& bus:cole){
        totalkms+=bus.ckm;
    }
    return totalkms/cole.size();
}
int masde500(const vector<colectivo> &cole,float promedio){
    int cont=0;
    for(const auto& bus:cole){
      if(bus.ckm>promedio+500){
        cont++;
    }   
  }
  return cont;
}
int main() {
int n;
cout<<"Ingrese la cantidad de colectivos: ";cin>>n;
vector<colectivo> bus(n);
for(int i=0;i<bus.size();i++){
    cout<<"Ingrese la patente del colectivo "<<i+1<<": ";cin>>bus[i].patente;
    cout<<"Ingrese la cantidad de kilometros recorridos por el colectivo "<<i+1<<": ";cin>>bus[i].ckm;
    cout<<"Ingrese la cantidad de pasajeros que llevo el colectivo "<<i+1<<": ";cin>>bus[i].cpasajeros;
}
string patente1,patente2;
cmpasajeros(bus,patente1,patente2);
cout<<"Los dos colectivos con menos cantidad de pasajeros fueron: "<<patente1<<" y "<<patente2<<endl;
float promedio=promediokm(bus);
cout<<"Promedio de kms entre todos los colectivos: "<<promedio<<endl;
int m500=masde500(bus,promedio);
cout<<"Cantidad de colectivos con 500km mas que el promedio: "<<m500<<endl;
return 0;
}