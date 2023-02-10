#include<iostream>
#include<math.h>
using namespace std;
int nguyento(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0)
			return 0;
	}
	return n > 1;
}
int main(){
	int n; cin>>n;
	int a[n][n];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin>>a[i][j];		
		}
	}
	int sum = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(j >= i && nguyento(a[i][j]))
				sum += a[i][j];
		}
	}
	cout<<sum;
}
