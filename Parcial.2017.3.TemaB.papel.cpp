#include <iostream>
#include <vector>
using namespace std;
int main() {
int posicion=0;
string nombre;
vector<string> personas={"Alvaro","Barbara","Constanza","Dennis","Enzo"};
cout<<"Lista original de nombres: "<<endl;
for(int i=0;i<personas.size();i++){
    cout<<personas[i]<<endl;
}
cout<<"Ingrese el nuevo nombre: ";cin>>nombre;
while(posicion<personas.size()&&personas[posicion]<nombre){
    posicion++;
}
personas.push_back("");
for(int i=personas.size()-1;i>posicion;i--){
    personas[i]=personas[i-1];
}
personas[posicion]=nombre;
cout<<"Nueva lista organizada: "<<endl;
for(int i=0;i<personas.size();i++){
    cout<<personas[i]<<endl;
}
return 0;
}