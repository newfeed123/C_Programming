#include<iostream>
using namespace std;

int main(){
	int n; cin>>n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}
	int max1 = -1e9, max2 = -1e9;
	for(int i = 0; i < n; i++){
		if(a[i] > max1){
			max2 = max1;
			max1 = a[i];
		}
		else if(a[i] > max2 && a[i] != max1){
			max2 = a[i];
		}
	}
	if(max2 == -1e9)
		max2 = -1;
	cout<<max1<<" "<<max2;
}
