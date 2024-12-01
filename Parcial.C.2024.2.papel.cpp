#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct atleta{
  int codigo;
  string nombre;
};
struct pruebas{
    int coda;
    int horas;
    int minutos;
    int segundos;
};
void clasificado(vector<atleta>& atl,vector<vector<pruebas>>& pru){
    int victoria[8]={0};
    int segundo[8]={0};
     for (int i = 0; i < 20; i++){
        int gan=-1,seg=-1,mjt=10000000,smt=10000000;
       for (int j = 0; j< pru[i].size(); j++){
         int tt=(pru[i][j].horas)*3600+(pru[i][j].minutos)*60+(pru[i][j].segundos);
         if(tt<mjt){
            smt=mjt;
            seg=gan;
            mjt=tt;
            gan=pru[i][j].coda-1;
         }else{
            smt=tt;
            seg=pru[i][j].coda-1;
         }
       }
       if(gan!=-1)victoria[gan]++;
       if(seg!=-1)segundo[seg]++;
    }
     int maxv=-1;
    int maxs=-1;
    int aclasi=-1;
    for (int h = 0; h < 8; h++){
        if(victoria[h]>maxv){
            maxv=victoria[h];
            aclasi=h;
            maxs=segundo[h];
        }else if(victoria[h]==maxv && segundo[h]>maxs){
            aclasi=h;
            maxs=segundo[h];
        }
    }
     cout<<"El atleta clasificado es: "<<atl[aclasi].codigo<<endl;
}
int main(){
    vector<atleta> atl(2);
    vector<vector<pruebas>> prue(2);
    for (int i = 0; i < atl.size(); i++){
        cout<<"Ingrese el codigo del atleta: ";cin>>atl[i].codigo;
        cout<<"Ingrese el nombre del atleta: ";cin>>atl[i].nombre;
    }
    for(int i=0;i<2;i++){
    for (int j = 0; j < 2; j++){
        cout<<"Ingrese las horas de la prueba "<<j+1<<": ";cin>>prue[i][j].horas;
        cout<<"Ingrese los minutos de la prueba "<<j+1<<": ";cin>>prue[i][j].minutos;
        cout<<"Ingrese los segundos de la prueba "<<j+1<<": ";cin>>prue[i][j].segundos;
    }
    }
    clasificado(atl,prue);
    return 0;
}