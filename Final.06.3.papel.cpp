#include <iostream>
#include <vector>
using namespace std;
struct idh{
    string nombre,continente,componentes;
    int valor_comp,cod_comp;
};
pair<string,int> indice_hum(vector<idh>& country,string nombre){
   pair<string,int> nuevo;
   int totalcomp=0,totalidh=0;
   for(int i=0;i<country.size();i++){
    if(country[i].nombre==nombre){
        nuevo.first=country[i].nombre;
        totalcomp+=country[i].valor_comp;
        totalidh=totalcomp/15;
        nuevo.second=totalidh;
        return nuevo;
    }
   }
   nuevo.first=-1;
   return nuevo;
}
int ameri(vector<idh>& country,string conti,string componen){
    int cont=0;
    for(int i=0;i<country.size();i++){
        if(country[i].continente==conti && country[i].componentes==componen && country[i].valor_comp>90){
                cont++;
        }
    }
    return cont;
}
int main() {
int n;
string name,conti="ams",componen="ese";
cout<<"Ingrese la cantidad de paises: ";cin>>n;
vector<idh> pais(n);
for(int i=0;i<pais.size();i++){
    cout<<"Nombre del pais: ";cin>>pais[i].nombre;
    cout<<"Continente: ";cin>>pais[i].continente;
    cout<<"Codigo de componente: ";cin>>pais[i].cod_comp;
    cout<<"Componente: ";cin>>pais[i].componentes;
    cout<<"Valor del componente: ";cin>>pais[i].valor_comp;
}
cout<<"Ingrese el nombre del pais a saber el idh: ";cin>>name;
pair<string,int> sabe=indice_hum(pais,name);
cout<<"Nombre del pais: "<<sabe.first<<endl;
cout<<"IDH total: "<<sabe.second<<endl;
int paisams=ameri(pais,conti,componen);
cout<<"Paises con el componente C mayor a 90 fueron: "<<paisams<<endl;
return 0;
}