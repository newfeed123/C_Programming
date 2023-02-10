#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main(){
	int n;cin>>n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}
	int x, dem = 0; cin>>x;
	for(int i = 0; i < n; i++){
		if(a[i] == x)
			dem++;
	}
	cout<<dem;
}
