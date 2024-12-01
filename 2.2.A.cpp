#include <iostream>
#include <vector>
using namespace std;
void ieo(vector<int>& v,int &tama,int nv){
	int i=tama-1;
	while(i>=0&& v[i]>nv){
		v[i+1]=v[i];
		--i;
	}
	v[i+1]=nv;
	tama++;
}
int main() {
	int n;
	cin>>n;
	int nv;
	cin>>nv;
	vector<int> reem(n);
	cout<<"Vector original: "<<endl;
	for(int i=0;i<reem.size();i++) { 
		cin>>reem[i];
	}
	cout<<"--------"<<endl;
	ieo(reem,n,nv);
	cout<<"Vector modificado: "<<endl;
	for(int i=0;i<n;i++) { 
		cout<<reem[i]<<endl;
	}
	return 0;
}

