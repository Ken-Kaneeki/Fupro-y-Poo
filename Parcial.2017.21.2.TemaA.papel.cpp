#include <iostream>
#include <vector>
using namespace std;
struct alumno{
    int codigo_alumno,dni,nota;
    string nombre;
};
bool buscar_estudiante(vector<alumno>& students,int codigo){
for(int i=0;i<students.size();i++){
    if(students[i].codigo_alumno==codigo)return true;
}
return false;
}
pair<int,alumno> datos(vector<alumno>& students,int codigo){
    bool busca=buscar_estudiante(students,codigo);
    for(int i=0;i<students.size();i++){
    if(busca==true){
       return{i,students[i]};
    }
    }
    return{-1,{}};
}
int main() {
vector<alumno> curso;
while(true){
    alumno student;
    cout<<"Codigo de alumno: ";cin>>student.codigo_alumno;
    if(student.codigo_alumno==0)break;
    cout<<"Dni: ";cin>>student.dni;
    cout<<"Nota: ";cin>>student.nota;
    cout<<"Nombre: ";cin>>student.nombre;
    curso.push_back(student);
}
while(true){
    int codigo;
    cout<<"Ingrese el codigo a buscar: ";cin>>codigo;
    if(codigo==0)break;
    if(buscar_estudiante(curso,codigo)){
        pair<int,alumno> resultado=datos(curso,codigo);
        int indice=resultado.first;
        alumno studen=resultado.second;
        cout<<"Estudiante encontrado: "<<endl;
        cout<<"Codigo de alumno: "<<studen.codigo_alumno<<endl;
        cout<<"Nombre: "<<studen.nombre<<endl;
        cout<<"Dni: "<<studen.dni<<endl;
        cout<<"Nota: "<<studen.nota<<endl;
    }else{
        cout<<"Estudiante no encontrado"<<endl;
    }
}
return 0;
}