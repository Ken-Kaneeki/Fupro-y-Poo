#include <iostream>
#include <cmath>
using namespace std;
float facto(float v){
    if(v==0){
        return 1;
    }
    return v*facto(v-1);
}
float sen_sobre_x(float x,int terminos){
 float resultado=1.0;
 float termino=x*x;  
 int xd=-1;
 for(int i=0;i<terminos;i++){
   resultado+=xd*(termino/facto(2*i+1));
   termino*=(x*x);
   xd*=-1;
 }
 return resultado;
}
int main(){
float valor,aproximado,actual;
int x;
cout<<"Ingrese el valor: ";cin>>valor;
cout<<"Ingrese el valor de X: ";cin>>x;
aproximado=sen_sobre_x(valor,x);
actual=sin(x)/x;
cout<<"Valor usando la serie: "<<aproximado<<endl;
cout<<"Valor usando la funcion SIN: "<<actual<<endl;
return 0;
}