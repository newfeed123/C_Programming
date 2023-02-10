#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n; cin>>n;
	int a[n][n];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++)
			cin>>a[i][j];
	}
	int i = 0;
	while(i < n){
		int tmp = n-1;
		for(int j = 0; j < n; j++){
			swap(a[i][i], a[j][tmp--]);
			i++;	
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
}
