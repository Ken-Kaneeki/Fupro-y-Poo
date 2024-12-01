#include <iostream>
#include <vector>
using namespace std;
struct pasaje{
    int cod_venta,fecha,cant_vendido;
};
int venta_5(vector<pasaje>& passages){
    int totalvendidos=0;
    for(int i=0;i<passages.size();i++){
        if(passages[i].cod_venta==5){
            totalvendidos+=passages[i].cant_vendido;
        }
    }
     return totalvendidos;
}
int venta_mes(vector<pasaje>& passages,int mes_buscar){
    int total_mes=0;
    for(int i=0;i<passages.size();i++){
    int fecha=passages[i].fecha;
    int mes=(fecha%10000)/100;
    if(mes==mes_buscar){
        total_mes+=passages[i].cant_vendido;
    }
}
   return total_mes;
}
void mes_9(const vector<pasaje>& passage){
    bool punto_sventa[11]={false};
    for(int i=0;i<passage.size();i++){
    int mes=(passage[i].fecha%10000)/100;
    if(mes==10 && passage[i].cant_vendido>0){
        punto_sventa[passage[i].cod_venta]=true;
    }
 }
}
int main() {
int año,mes,dia,resto,mes_buscar;
vector<pasaje> pasajes;
while(true){
    pasaje passage;
    cout<<"Ingrese el codigo de punto de venta: ";cin>>passage.cod_venta;
    if(passage.cod_venta<1 || passage.cod_venta>10)break;
    cout<<"Ingrese la fecha: ";cin>>passage.fecha;
    año=passage.fecha/10000;
    resto=passage.fecha%10000;
    mes=resto/100;
    dia=resto%100;
    cout<<"Fecha ingresada: "<<dia<<"/"<<mes<<"/"<<año<<endl;
    cout<<"Ingrese la cantidad vendida: ";cin>>passage.cant_vendido;
    pasajes.push_back(passage);
}
int ventas=venta_5(pasajes);
cout<<"Cantidades vendidas por el punto de venta 5: "<<ventas<<endl;
cout<<"Ingrese el mes a buscar la cantidad de pasajes que se vendieron: ";cin>>mes_buscar;
int total_meses=venta_mes(pasajes,mes_buscar);
cout<<"Cantidad vendida en el mes "<<mes_buscar<<" fue: "<<total_meses<<endl;
cout<<"Puntos de venta que no vendieron en octubre: "<<endl;
mes_9(pasajes);
return 0;
}