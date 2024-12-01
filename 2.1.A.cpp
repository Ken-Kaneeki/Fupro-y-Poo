#include <iostream>
#include <vector>
using namespace std;
void re(vector<int> &v){
int sumaa=0,prom;
for(int i=0;i<v.size();i++) { 
	if(v[i]>0){
		sumaa+=v[i];
	}
}
prom=sumaa/v.size();
for(int& num:v){
	if(num<0){
		num=prom;
		}
	}
}
int main() {
	int min=-200;
	int max=200;
    vector<int> presion(200);
	cout<<"Vector original: "<<endl;
	for(int i=0;i<presion.size();i++) { 
		presion[i]=min+(rand()%(max-min+1));
		cout<<presion[i]<<endl;
	}
	cout<<"-----------------------------"<<endl;
	re(presion);
	cout<<"Vector modificado: "<<endl;
	for(int num:presion){
		cout<<num<<endl;
	}
	return 0;
}

