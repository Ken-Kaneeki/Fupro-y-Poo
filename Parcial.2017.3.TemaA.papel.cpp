#include <iostream>
#include <vector>
using namespace std;

int main() {
int n,nuevo_valor,j=0;
cout<<"Ingrese el valor de N: ";cin>>n;
vector<int> lista(n+1);
for(int i=0;i<n;++i){
    cout<<"N° "<<i+1<<": ";cin>>lista[i];
}
cout<<"Ingrese el nuevo valor a insertar: ";cin>>nuevo_valor;
while(j<n && lista[j]<nuevo_valor){
    j++;
}
for(int h=n;h>j;h--){
    lista[h]=lista[h-1];
}
lista[j]=nuevo_valor;
cout<<"Nueva lista: "<<endl;
for(int i=0;i<=n;i++){
    cout<<lista[i]<<" ";
}
return 0;
}