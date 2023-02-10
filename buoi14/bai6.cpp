#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int x;cin>>x;
		int min = 1e9;
		int a[n], b[n] = {0}, idx = 0;
		for(int i = 0; i < n; i++){
			cin>>a[i];
		}
		for(int i = 0; i < n-1; i++){
			for(int j = 0; j < n-i-1; j++){
				if(abs(x-a[j+1]) < abs(x-a[j]))
					swap(a[j],a[j+1]);
			}
		}
		for(int i = 0; i < n; i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}
