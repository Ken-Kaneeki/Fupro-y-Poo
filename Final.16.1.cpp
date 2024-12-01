#include <iostream>
#include <matrix>
#include <vector>
using namespace std;
vector<float> maypf(const matrix<float>& v){
	vector<float> mayo(v.size(0));
	for(size_t i=0;i<v.size(0);i++) { 
		float mayor=0.0;
		for(size_t j=1;j<v.size(1);j++) { 
			if(v[i][j]>mayor){
				mayor=v[i][j];
			}
		}
		mayo[i]=mayor;
	}
	return mayo;
}
int main() {
    matrix<float> mayores=(20,14);
	for(size_t i=0;i<mayores.size(0);i++) { 
		for(size_t j=0;j<mayores.size(1);j++) { 
			mayores[i][j]=static_cast<float>(rand())/RAND_MAX*100;
		}
	}
	vector<float> mayo=maypf(mayores);
	cout<<"Mayores elementos por fila: ";
	for(float mayor:mayo){
		cout<<mayor<<" ";
	}
	cout<<endl;
	return 0;
}

