#include<iostream>
#include<vector>
#include <iomanip>
using namespace std;

int main(){
	int op;
	cin>>op;
	vector<char>mayusc{
		{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'}
	};
	vector<char>minusc{
		{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'}
 	};
	if(op==1){
		for(int i=0;i<mayusc.size();++i){
			cout<<mayusc[i];
		}
	} else if(op==2){
		for(int i=0;i<minusc.size();++i){
			cout<<minusc[i];
		}
	}
	return 0;
}

