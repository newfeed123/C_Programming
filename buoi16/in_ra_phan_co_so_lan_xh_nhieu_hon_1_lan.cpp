#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n; 
	cin>>n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}
	int min = 1e9, pos = -1;
	for(int i = 0; i < n; i++){
		for(int j = i+1; j < n; j++){
			if(abs(a[i]-a[j]) < min){
				min = abs(a[i]-a[j]);
				pos = i;
			}
		}
	}
	cout<<min<<" "<<a[pos]<<" "<<a[pos+1];
}
