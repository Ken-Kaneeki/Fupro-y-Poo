#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct tarjeta{
    int numero_tarjeta;
    float creditos=0,saldo;
    string cliente;
};
struct premio{
   int codigo;
   string descripcion;
   float valor;
   bool disponible=true;
};
int canjearPremio(vector<tarjeta> &Tarj,vector<premio> &premios,int nrotarjeta,int codigos){
    int itarjeta,ipremios;
    for (size_t i = 0; i < Tarj.size(); i++){
        if(Tarj[i].numero_tarjeta==nrotarjeta){
           itarjeta=i;
           break;
        }
    }
    if(itarjeta==-1){
        return 1;
    }
    for (size_t j = 0; j < premios.size(); j++){
        if(premios[j].codigo==codigos && premios[j].disponible){
            ipremios=j;
            break;
        }
    }
    if(ipremios==-1){
      return 2;
    }
    if(Tarj[itarjeta].creditos>=premios[ipremios].valor){
        Tarj[itarjeta].creditos-=premios[ipremios].valor;
        premios[ipremios].disponible=false;
        return 0;
    }else{
        return 3;
    }
}
int main(){
    int n,m,nrotarjeta,codigo,resultado;
    cout<<"Ingrese el valor de N: ";cin>>n;
    cout<<"Ingrese el valor de M: ";cin>>m;
    vector<tarjeta> card(m);
    vector<premio> gift(n);
    for (size_t i = 0; i < m; i++){
        cout<<"Ingrese el numero de tarjeta: ";cin>>card[i].numero_tarjeta;
        cout<<"Ingrese el numero de creditos: ";cin>>card[i].creditos;
        cout<<"Ingrese el saldo de la tarjeta: ";cin>>card[i].saldo;
        cout<<"Ingrese el nombre del cliente: ";cin>>card[i].cliente;
    }
    for (size_t j = 0; j < n; j++){
        cout<<"Ingrese el codigo del premio: ";cin>>gift[j].codigo;
        cout<<"Ingrese la descripcion del premio: ";cin>>gift[j].descripcion;
        cout<<"Ingrese el valor de creditos que vale el premio: ";cin>>gift[j].valor;
    }
    cout<<"Ingrese el numero de la tarjeta: ";cin>>nrotarjeta;
    cout<<"Ingrese el codigo del premio: ";cin>>codigo;
    resultado=canjearPremio(card,gift,nrotarjeta,codigo);
    switch(resultado){
        case 0:
        cout<<"0-Canje realizado"<<endl;
        break;
        case 1:
        cout<<"1-Nro de tarjeta incorrecto"<<endl;
        break;
        case 2:
        cout<<"2-Nro de premio incorrecto"<<endl;
        break;
        case 3:
        cout<<"3-Creditos insuficientes"<<endl;
        break;
    }
    cout<<endl;
    for (size_t i = 0; i < m; i++){
        cout<<"Tarjeta: "<<card[i].numero_tarjeta<<endl;
        cout<<"Creditos restantes: "<<card[i].creditos<<endl;
    }
    
    return 0;
}