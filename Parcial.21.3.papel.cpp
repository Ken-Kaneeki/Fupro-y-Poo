#include <iostream>
#include <vector>
using namespace std;
struct atl{
    int cod_parti,dni,tiempo;
    string nombre;
};
bool buscar(vector<atl>& camina,int ide){
    for(int i=0;i<camina.size();i++){
        if(camina[i].dni==ide){
            return true;
        }
    }
    return false;
}
pair<int,atl> mostrar_datos(vector<atl>& camina,int ide){
    pair<int,atl> nuevo;
    bool verificar=buscar(camina,ide);
    for(int i=0;i<camina.size();i++){
    if(verificar==true){
        nuevo.first=ide;
        nuevo.second=camina[i];
        return nuevo;
    }
    }
    nuevo.first=-1;
    return nuevo;
}
int main() {
int identificacion;
vector<atl> caminante;
while(true){
    atl atle;
    cout<<"Codigo de participante: ";cin>>atle.cod_parti;
    if(atle.cod_parti==0)break;
    cout<<"Dni: ";cin>>atle.dni;
    cout<<"Tiempo: ";cin>>atle.tiempo;
    cout<<"Nombre: ";cin>>atle.nombre;
    caminante.push_back(atle);
}
cout<<"Ingrese el documento a buscar: ";cin>>identificacion;
pair<int,atl> info=mostrar_datos(caminante,identificacion);
cout<<"Dni: "<<info.first<<endl;
cout<<"Nombre: "<<info.second.nombre<<endl;
cout<<"Codigo de participante: "<<info.second.cod_parti<<endl;
cout<<"Tiempo: "<<info.second.tiempo<<" segundos"<<endl;
return 0;
}