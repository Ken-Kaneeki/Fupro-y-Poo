#include <iostream>
using namespace std;

int main() {
	int m,n,p,q,x=33,z=88;
	cin>>m>>n>>p>>q;
	int r1=m/n;
	int r2=p/q;
	int resto=r2%q;
	int x33=x++;
	int r3=x+x33;
	cout<<r1<<endl;
	cout<<resto<<endl;
	cout<<x<<endl;
	cout<<r3<<endl;
	cout<<z<<endl;
	int r4=++z;
	z=r4;
	cout<<z<<endl;
	return 0;
}

