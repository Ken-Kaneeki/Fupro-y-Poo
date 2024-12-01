#include <iostream>
#include <vector>
using namespace std;
pair<int,int> maximo(vector<int>& mayores){
   int max1=mayores[0];
   int max2=mayores[0];
    for(int i=1;i<mayores.size();i++){
      if(mayores[i]>max1){
       max2=max1;
       max1=mayores[i];
      }else if(mayores[i]>max2){
        max2=mayores[i];
      }
    }
    return {max1,max2};
}
int main() {
vector<int> mayores(5);
for(int i=0;i<mayores.size();i++){
    cout<<"Ingrese el valor: ";cin>>mayores[i];
}
cout<<endl;
for(int i=0;i<mayores.size();i++){
    cout<<"Valor N° "<<i+1<<" "<<mayores[i]<<endl;
}
cout<<endl;
pair<int,int> maxi=maximo(mayores);
cout<<"Primer mayor: "<<maxi.first<<endl;
cout<<"Segundo mayor: "<<maxi.second<<endl;
return 0;
}