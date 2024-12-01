#include <iostream>
#include <vector>
using namespace std;
int hcmi(const vector<vector<int>>& infracciones,int ne){
    int mah=0,mai=0;
    for(int j=0;j<24;j++){
        int sumah=0;
        for(int i=0;i<ne;i++){
            sumah=sumah+infracciones[i][j];
        }
        if(sumah>mah){
        mai=sumah;
         mah=j;
        }
    }
    return mah;
}
int ecmi(const vector<vector<int>>& infracciones,int ne){
    int mae=0,mai=0;
    for(int i=0;i<ne;i++){
        int sumae=0;
        for(int j=0;j<24;j++){
            sumae=sumae+infracciones[i][j];
        }
        if(sumae>mai){
        mai=sumae;
         mae=i;
        }
    }
    return mae;
}
void liyh(const vector<vector<int>>& infracciones,int ne,int cantidad){
    cout<<"Esquinas y horas con mas de "<<cantidad<<" infracciones: "<<endl;
    for(int i=0;i<ne;i++){
        for(int j=0;j<24;j++){
            if(infracciones[i][j]>cantidad){
                cout<<"Esquina "<<i+1<<",Hora "<<j<<": "<<infracciones[i][j]<<" infracciones"<<endl;
            }
        }
    }
}
int main() {
int ne,c,hcm,hce;
cout<<"Ingrese la cantidad de esquinas: ";cin>>ne;
vector<vector<int>> infracciones(ne,vector<int>(24,0));
for(int i=0;i<ne;i++){
    cout<<"Esquina "<<i+1<<": "<<endl;
    for(int j=0;j<24;j++){
        cout<<"Ingrese la cantidad de infracciones: ";cin>>infracciones[i][j];
    }
}
hcm=hcmi(infracciones,ne);
cout<<"Hora con mas infracciones: "<<hcm<<endl;
hce=ecmi(infracciones,ne);
cout<<"Esquina con mas infracciones: "<<hce<<endl;
cout<<"Ingrese la cantidad de infracciones a buscar: ";cin>>c;
liyh(infracciones,ne,c);
    return 0;
}