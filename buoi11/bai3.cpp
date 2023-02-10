#include<iostream>
using namespace std;

int main(){
	int n; cin>>n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}
	int min1 = 1e9, min2 = 1e9, min3 = 1e9;
	for(int i = 0; i < n; i++){
		if(a[i] < min1){
			//cout<<"1* ";
			min3 = min2;//gan min3 bang min 2 truoc
			min2 = min1;
			min1 = a[i];
			//cout<<"+"<<min2<<" ";
			//cout<<"_"<<min3<<" ";
		}
		else if(a[i] < min2){
			//cout<<"2* ";
			min3 = min2;
			min2 = a[i];
			//cout<<"_"<<min3<<" ";
		}
		else if(a[i] < min3){
			//cout<<"3* ";
			min3 = a[i];
			//cout<<"_"<<min3<<" ";
		}
	}
	cout<<min1<<" "<<min2<<" "<<min3;
}
