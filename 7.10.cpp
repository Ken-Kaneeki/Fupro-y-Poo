#include <iostream>
using namespace std;

int main() {
	int op,n=0;
	cin>>op;
	if(op==1){
		do{
			++n;
			cout<<n<<endl;
		} while(n!=25);
	}else if(op==2){
		do{
			--n;
			cout<<n<<endl;
		} while(n!=-25);
	}
	return 0;
}

