#include<iostream>
using namespace std;

int main(){
	int n, m, k; cin>>n>>m>>k;
	int a[n][m], b[m][k], c[n][k];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin>>a[i][j];
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin>>a[i][j];
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < k; j++){
			c[i][j] = 0;
			for(int l = 0; l < m; l++){
				c[i][j] += a[i][l] * b[l][i]; 
			}
		}
	}
	for(int i = 0; i < n; i++){
		for(int i = 0; i < m; i++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
