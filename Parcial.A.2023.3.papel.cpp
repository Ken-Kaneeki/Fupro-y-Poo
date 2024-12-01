#include <iostream>
#include <vector>
using namespace std;

int main() {
int n,test,nroa;
string teacher;
cout<<"Ingrese la cantidad de alumnos: ";cin>>n;
vector<vector<string>> tests(n,vector<string>(4,"No rindio"));
vector<bool> stest(n,false);
while(true){
    cout<<"Ingrese el numero de alumno: ";cin>>nroa;
    if(nroa==-1)break;
    cout<<"Ingrese el numero de evaluacion: ";cin>>test;
    if(test<1 || test>4)break;
    cout<<"Ingrese el nombre del profesor: ";cin>>teacher;
    tests[nroa-1][test-1]=teacher;
    stest[nroa-1]=true;
}
vector<int> ctest(4,0);
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(tests[i][j]!="No rindio"){
            ctest[j]++;
        }
    }
}
for(int i=0;i<4;i++){
    cout<<"Cantidad de alumnos que rindieron la evaluacion "<<i+1<<": "<<ctest[i]<<endl;
}
cout<<"Lista de alumnos que no rindieron ninguna evaluacion: "<<endl;
for(int i=0;i<n;i++){
    if(!stest[i]){
        cout<<"Alumno: "<<i+1<<endl;
    }
}
cout<<"Ingrese el nombre del profesor para saber cuantas evaluaciones corrigio: ";cin>>teacher;
int cteacher=0;
for(int i=0;i<n;i++){
    for(int j=0;j<4;j++){
        if(tests[i][j]==teacher){
            cteacher++;
        }
    }
}
if(cteacher>0){
    cout<<"El profesor "<<teacher<<" corrigio "<<cteacher<<" evaluaciones"<<endl;
}else{
    cout<<"El profesor "<<teacher<<" no corrigio ninguna evaluacion"<<endl;
}
return 0;
}