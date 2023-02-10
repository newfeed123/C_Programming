#include<iostream>
using namespace std;

int main(){
	int n;cin>>n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}
	for(int i = 1; i < n; i++){
		int x = a[i];//lay 1 thang ra de chen
		int pos = i;//xet tu vi tri nay lui ve ( 
		//5 4 3 2 1
		while(pos > 0 && a[pos-1] > x){
			a[pos] = a[pos-1];
			pos--;
		}
		a[pos] = x;
		cout<<"Buoc "<<i<<": ";
		for(int k = 0; k <= pos; k++)
			cout<<a[k]<<" ";
		cout<<endl;
	}	
}
