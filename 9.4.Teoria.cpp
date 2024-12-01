#include <iostream>
#include <vector>
#include <matrix>
using namespace std;
void age(vector<vector<int>> &m){
	vector<int> ft;
	for(size_t i=0;i<m[0].size();i++) { 
		int tc=0;
		for(size_t j=0;j<m.size();j++) { 
			tc+=m[j][i];
		}
		ft.push_back(tc);
	}
	m.push_back(ft);
	
	for(size_t i=0;i<m.size();i++) { 
		int tf=0;
			for(size_t j=0;j<m[i].size();j++) { 
			tf+=m[i][j];
		}
		m[i].push_back(tf);
	}
}
int main() {
	vector<vector<int>> mv={
		{100,200,300},
		{400,500,600},
		{700,800,900}
	};
	cout<<"Matriz original: "<<endl;
	for(const auto &fila:mv){
		for(int valor : fila){
			cout<<valor<<" ";
		}
		cout<<endl;
	}
	age(mv);
	cout<<"Matriz modificada: "<<endl;
	for(const auto &fila:mv){
		for(int valor : fila){
			cout<<valor<<" ";
		}
		cout<<endl;
	}
	return 0;
}

