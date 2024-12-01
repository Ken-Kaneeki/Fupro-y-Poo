#include <iostream>
using namespace std;

int main() {
	int e;
	cin>>e;
	if(e%2==0){
		cout<<"Es par"<<endl;
	} else{
		cout<<"Es impar"<<endl;
	}
	if(e%5==0 && e%3==0){
		cout<<"Es multiplo de 5 y 3"<<endl;
	} else {
		cout<<"No es multiplo ni de 5 ni de 3"<<endl;
	}
	return 0;
}

