#include<iostream>
using namespace std;

int main(){
	int n;cin>>n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}
	for(int i = 0; i < n-1; i++){
		int vt_min = i;//vi tri min
		for(int j = i+1; j < n; j++){
			if(a[j] < a[vt_min]){
				vt_min = j;
			}
		}
			int tmp = a[i];
			a[i] = a[vt_min];
			a[vt_min] = tmp;
		cout<<"Buoc "<<i+1<<": ";
		for(int k = 0; k < n; k++)
			cout<<a[k]<<" ";
		cout<<endl;
	}	
}
