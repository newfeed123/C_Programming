#include<iostream>
using namespace std;

int main(){
	int n;cin>>n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}
	for(int i = 0; i < n-1; i++){
		//doi voi moi phan tu o vi tri i, doi cho ngay neu gap nghich the trong khong tu j = i+1 -> n
		for(int j = i+1; j < n; j++){
			if(a[i] > a[j]){
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
		cout<<"Buoc "<<i+1<<": ";
		for(int k = 0; k < n; k++)
			cout<<a[k]<<" ";
		cout<<endl;
	}	
}
