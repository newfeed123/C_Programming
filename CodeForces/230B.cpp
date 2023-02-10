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
	for(int i = 0; i < n; i++){
		int dem = 0;
		int x = a[i];
		for(int j = 2; j < x; j++){
			if(x % j)
				dem++;
		}
		if(dem == 1)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}
