#include <iostream>
#include <vector>
using namespace std;
struct atleta{
    string nombre;
    int tiempo;
};
int main() {
int n,tiempo_gan=999999,tiempo_seg=999999,cont=0;
string gan,segundo;
cout<<"Ingrese la cantidad de atletas: ";cin>>n;
if(n>50)break;
vector<atleta> atletas(n);
for(int i=0;i<n;++i){
    cout<<"Nombre del atleta: ";cin>>atletas[i].nombre;
    cout<<"Tiempo del atleta: ";cin>>atletas[i].tiempo;
    if(atletas[i].tiempo<tiempo_gan){
        tiempo_seg=tiempo_gan;
        segundo=gan;
        gan=atletas[i].nombre;
        tiempo_gan=atletas[i].tiempo;
    }else if(atletas[i].tiempo<tiempo_seg){
        segundo=atletas[i].nombre;
        tiempo_seg=atletas[i].tiempo;
    }
}
if(tiempo_seg+5>tiempo_seg){
        cont++;
}
cout<<"Ganador: "<<gan<<endl;
cout<<"Tiempo del ganador: "<<tiempo_gan<<endl;
cout<<"Segundo: "<<segundo<<endl;
cout<<"Tiempo del segundo: "<<tiempo_seg<<endl;
cout<<"Cantidad de atletas que estuvieron a mas de 5 segundos del segundo: "<<cont<<endl;
return 0;
}