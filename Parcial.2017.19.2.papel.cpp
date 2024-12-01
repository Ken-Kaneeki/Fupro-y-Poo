#include <iostream>
#include <vector>
using namespace std;
struct Ejercicio{
string nombre_ejercicio,texto_enunciado;
int puntaje,dificultad;
};
pair<int,Ejercicio> buscar_ejercicio(vector<Ejercicio>& test,string nombre){
    pair<int,Ejercicio> nuevo;
    for(int i=0;i<test.size();++i){
        if(test[i].nombre_ejercicio==nombre){
            nuevo.first=i;
            nuevo.second=test[i];
            return nuevo;
        }
    }
    nuevo.first=-1;
    return nuevo;
}
int main() {
int n,promedio_puntajes=0;
float dificultad_total=0.0,promedio;
string nombre;
cout<<"Ingrese la cantidad de ejercicios: ";cin>>n;
cin.ignore();
vector<Ejercicio> tests(n);
for(int i=0;i<tests.size();++i){
    cout<<"Ingrese el nombre del ejercicio: ";getline(cin,tests[i].nombre_ejercicio);
    cout<<"Ingrese el texto del enunciado: ";getline(cin,tests[i].texto_enunciado);
    cout<<"Ingrese el puntaje del ejercicio: ";cin>>tests[i].puntaje;
    cout<<"Ingrese la dificultad del ejercicio: ";cin>>tests[i].dificultad;
    dificultad_total+=tests[i].dificultad;
    promedio_puntajes+=tests[i].puntaje;
    cin.ignore();
}
while(nombre!="."){
cout<<"Ingrese el nombre del ejercicio a buscar: ";getline(cin,nombre);
pair<int,Ejercicio> posicion=buscar_ejercicio(tests,nombre);
cout<<"El ejercicio se encuentra en la posicion: "<<posicion.first<<endl;
cout<<"Nombre del ejercicio: "<<posicion.second.nombre_ejercicio<<endl;
cout<<"Texto del ejercicio: "<<posicion.second.texto_enunciado<<endl;
cout<<"Puntaje del ejercicio: "<<posicion.second.puntaje<<endl;
cout<<"Dificultad del ejercicio: "<<posicion.second.dificultad<<endl;
}
promedio=dificultad_total/tests.size();
cout<<"Dificultad del examen: "<<promedio<<endl;
if(promedio_puntajes<100){
    cout<<"Los promedios seleccionados no suman 100"<<endl;
}else if(promedio_puntajes>=100){
    cout<<"Los promedios seleccionados si suman 100"<<endl;
}
return 0;
}