#include <iostream>
#include <vector>
using namespace std;
struct equipoF1{
    string equipo,titular1,titular2,reserva;
};
void sustituir_piloto(vector<equipoF1>& team,string titular){
    string aux;
    for(int i=0;i<team.size();i++){
        if(titular==team[i].titular1){
        aux=team[i].titular1;
          team[i].titular1=team[i].reserva;
          team[i].reserva=aux;
        }else if(titular==team[i].titular2){
            aux=team[i].titular2;
            team[i].titular2=team[i].reserva;
            team[i].reserva=aux;
        }else if(titular!=team[i].titular1 || titular!=team[i].titular2){
            cout<<"No encontrado"<<endl;
        }
    }
}
int main() {
    int n;
    string titular;
    cout<<"Ingrese la cantidad de equipos de F1: ";cin>>n;
    vector<equipoF1> formula1(n);
    for(int i=0;i<formula1.size();i++){
        cout<<"Ingrese el nombre del equipo de F1: ";cin>>formula1[i].equipo;
        cout<<"Ingrese el nombre del piloto titular N°1: ";cin>>formula1[i].titular1;
        cout<<"Ingrese el nombre del piloto titular N°2: ";cin>>formula1[i].titular2;
        cout<<"Ingrese el nombre del piloto de reserva: ";cin>>formula1[i].reserva;
    }
    cout<<"Lista de equipos: "<<endl;
    for(int i=0;i<n;i++){
        cout<<"Equipo: "<<formula1[i].equipo<<endl;
        cout<<"Piloto titular N°1: "<<formula1[i].titular1<<endl;
        cout<<"Piloto titular N°2: "<<formula1[i].titular2<<endl;
        cout<<"Piloto de reserva: "<<formula1[i].reserva<<endl;
    }
    cout<<"Ingrese el nombre del piloto a reemplazar: ";cin>>titular;
    sustituir_piloto(formula1,titular);
     for(int i=0;i<n;i++){
        cout<<"Equipo: "<<formula1[i].equipo<<endl;
        cout<<"Piloto titular N°1: "<<formula1[i].titular1<<endl;
        cout<<"Piloto titular N°2: "<<formula1[i].titular2<<endl;
        cout<<"Piloto de reserva: "<<formula1[i].reserva<<endl;
    }
    return 0;
}