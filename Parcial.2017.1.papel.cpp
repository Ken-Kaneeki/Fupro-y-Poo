#include <iostream>
#include <vector>
using namespace std;
struct user{
    string nombre,contraseña;
};
bool validar_contraseña(string contraseña){
    return contraseña!="1234"&&contraseña!="pass"&&contraseña!="asdf";
}
int main() {
vector<user> programa;
user tempusuario;
string contraseñai,nombrei;
cout<<"Por favor identifiquese: "<<endl;
while(true){
    cout<<"Nombre: ";cin>>tempusuario.nombre;
    if(tempusuario.nombre=="ZZZ")break;
    do{
        cout<<"Contraseña: ";cin>>tempusuario.contraseña;
        if(!validar_contraseña(tempusuario.contraseña)){
           cout<<"Error, ingrese otra contraseña"<<endl;
        }
    }while(!validar_contraseña(tempusuario.contraseña));
    programa.push_back(tempusuario);
}
bool acceso=false;
for(int inten=0;inten<5;inten++){
    cout<<"Nombre: ";cin>>nombrei;
    cout<<"Contraseña: ";cin>>contraseñai;
    for(int i=0;i<programa.size();i++){
        if(programa[i].nombre==nombrei && programa[i].contraseña==contraseñai){
            cout<<"Bienvenido al sistema Sr."<<nombrei<<endl;
            acceso=true;
            break;
        }
    }
    if(acceso)break;
}
if(!acceso){
    cout<<"Fuera bicho!"<<endl;
}
return 0;
}