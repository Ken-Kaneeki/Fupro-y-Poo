#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct archivos{
    string nombre;
    int clineas,cfunciones;
};
void average(const vector<archivos> &files){
    for(int i=0;i<files.size();i++){
        if(files[i].cfunciones>0){
        int promedio=files[i].clineas/files[i].cfunciones;
        cout<<"Promedio de lineas por funcion del archivo "<<files[i].nombre<<": "<<promedio<<endl;
        }
    }
}
void maslineas(const vector<archivos> &files){
   int max1=-1,max2=-1;
   string namefile1,namefile2;
   bool sfilefind=false;
   for(const auto&file : files){
     if(file.clineas>max1){
        namefile2=namefile1;
        max2=max1;
        sfilefind=true;
        max1=file.clineas;
        namefile1=file.nombre;
     }else{
        max2=file.clineas;
        namefile2=file.nombre;
        sfilefind=true;
     }
   }
   cout<<"El archivo con mas lineas es "<<namefile1<<" con: "<<max1<<" lineas"<<endl;
   cout<<"El segundo archivo con mas lineas es "<<namefile2<<" con: "<<max2<<" lineas"<<endl;
}
void totalfiles(const vector<archivos> &files){
    int totaline=0,totalfunction=0;
    for(const auto& file: files){
        totaline+=file.clineas;
        totalfunction+=file.cfunciones;
    }
    cout<<"Total de lineas: "<<totaline<<endl;
    cout<<"Total de funciones: "<<totalfunction<<endl;
}
int main(){
    int n;
    cout<<"Ingrese el valor de N: ";cin>>n;
    vector<archivos> file(n);
    for(int i=0;i<n;i++){
     cout<<"Ingrese el nombre del archivo: ";cin>>file[i].nombre;
     cout<<"Ingrese la cantidad de lineas del archivo: ";cin>>file[i].clineas;
     cout<<"Ingrese la cantidad de funciones del archivo: ";cin>>file[i].cfunciones;
    }
    cout<<"Promedio de lineas por funcion: "<<endl;
    average(file);
    cout<<"Archivos con mas cantidad de lineas: "<<endl;
    maslineas(file);
    cout<<"Total de lineas y funciones: "<<endl;
    totalfiles(file);
    return 0;
}