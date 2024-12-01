#include <iostream>
#include <vector>
using namespace std;
struct usuario{
    int nro_usuario,kw_consumidos,monto_factura;
    string tipo_usuario;
};
pair<int,int> montos(vector<usuario>& ep,string tipusu){
    pair<int,int> nuevo;
    int totalkw=0;
    for(int i=0;i<ep.size();i++){
        if(ep[i].tipo_usuario==tipusu){
          totalkw+=ep[i].kw_consumidos;
          if(totalkw<=700){
            nuevo.first=totalkw;
            ep[i].monto_factura=totalkw*200;
            nuevo.second=ep[i].monto_factura;
            return nuevo;
          }else if(totalkw>700){
            nuevo.first=totalkw;
            ep[i].monto_factura=totalkw*300;
            nuevo.second=ep[i].monto_factura;
            return nuevo;
          }
        }
    }
    nuevo.first=-1;
    return nuevo;
}
int main() {
string tipusua;
vector<usuario> epe;
while(true){
    usuario user;
    cout<<"Numero de usuario: ";cin>>user.nro_usuario;
    if(user.nro_usuario==0)break;
    cout<<"Tipo de usuario: ";cin>>user.tipo_usuario;
    cout<<"Kw consumidos: ";cin>>user.kw_consumidos;
    epe.push_back(user);
}
cout<<"Ingrese el tipo de usuario a buscar: ";cin>>tipusua;
pair<int,int> mont=montos(epe,tipusua);
cout<<"Kw consumidos en total: "<<mont.first<<endl;
cout<<"Monto total de factura: "<<mont.second<<endl;
return 0;
}