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
	int min = a[0], dem = 0;
	for(int i = 0; i < n; i++){
		if(a[i] <= min)
			dem = i;
	}
	cout<<dem+1;
}
