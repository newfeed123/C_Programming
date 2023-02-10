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
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n-1; j++)
			for(int k = j+1; k < n; k++){
				if(a[j][i] > a[k][i]){
					swap(a[j][i], a[k][i]);
				}
			}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
}
