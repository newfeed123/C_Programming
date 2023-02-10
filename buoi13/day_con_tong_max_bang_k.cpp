#include<iostream>
using namespace std;
int tong_arr(int a[], int n){
	int sum = 0;
	for(int i = 0; i < n; i++)
		sum += a[i];
	return sum;
}
int solve(int a[], int n, int k){
	//7 3
	//1 2 7 4 3 9 8
	//
	int sum_max = -1e9;
	for(int i = 0; i <= n-k; i++){
		int sum = 0;
		for(int j = i; j < k + i; j++)
			sum += a[j];
		if(sum > sum_max )
			sum_max = sum;
	}
	return sum_max;
}
int main(){
	int n, k;
	cin>>n>>k; 
	int a[n];
	for(int i = 0; i < n; i++)
		cin>>a[i];
	cout<<solve(a,n,k);
}
