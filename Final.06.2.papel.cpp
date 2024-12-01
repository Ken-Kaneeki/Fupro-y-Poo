#include <iostream>
#include <vector>
#include "matrix"
using namespace std;
void gobernador(matrix<int>& parti,vector<string>& gober){
    int maxv=0,pgan=0,totalv=0;
    for(size_t partido=0;partido<parti.size(0);partido++){
        int votospartido;
        for(size_t depto=0;depto<parti.size(1);depto++){
            votospartido+=parti[partido][depto];
        }
        totalv+=votospartido;
        if(votospartido>maxv){
            maxv=votospartido;
            pgan=partido;
        }
    }
    float porcentaje=(maxv*100.0)/totalv;
    cout<<"El proximo gobernador es: "<<gober[pgan]<<endl;
    cout<<"Codigo de partido: "<<pgan+1<<endl;
    cout<<"Porcentaje de votos: "<<porcentaje<<"%"<<endl;
}
int main() {
vector<string> candidatos(1);
for(int i=0;i<candidatos.size();i++){
    cout<<"Nombre del candidato del partido "<<i+1<<": ";cin>>candidatos[i];
}
matrix<int> partidos(1,1);
int nro_mesa,depto,votos,cod_partido;
while(true){
    cout<<"Numero de mesa: ";cin>>nro_mesa;
    if(nro_mesa==0)break;
    cout<<"Codigo de partido: ";cin>>cod_partido;
    cout<<"Departamento: ";cin>>depto;
    cout<<"Votos: ";cin>>votos;
    if(depto>=1 && depto<=2 && cod_partido>=1 && cod_partido<=2){
        partidos[cod_partido-1][depto-1]+=votos;
    }
}
gobernador(partidos,candidatos);
return 0;
}