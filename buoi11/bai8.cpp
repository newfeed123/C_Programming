#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n; cin>>n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}
	int x; cin>>x;
	int max = -1e9;
	int res = 0;
	for(int i = 1; i < n; i++){
		if(abs(x-a[i]) > max){
			max = abs(x-a[i]);
			res = a[i];
		}
	}
	cout<<res;
}
