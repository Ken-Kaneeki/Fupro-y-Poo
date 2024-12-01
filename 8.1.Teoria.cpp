#include <iostream>
#include <cmath>
using namespace std;
bool esprimo(int n){
	int limite=sqrt(n);
	for(int i=2;i<limite;++i) { 
		if(n%1==0 && n%n==0){
			return true;
		}
	}
	return false;
}
int main() {
	int n;
	cin>>n;
	int resul=esprimo(n);
	if(resul==1){
		cout<<"Es primo"<<endl;
	}else{
		cout<<"No es primo"<<endl;
	}
	return 0;
}

