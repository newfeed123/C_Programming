#include<iostream>
#include<math.h>
using namespace std;
int tong_arr(int a[], int n){
	int sum = 0;
	for(int i = 0; i < n; i++)
		sum += a[i];
	return sum;
}
int solve(int a[], int n, int k){
	int sum_window_first = 0;
	for(int i = 0; i < k; i++){
		sum_window_first += a[i];
	}
	int sum_max = sum_window_first;
	//xet cua so thu 2 (chi so i = 1)
	for(int i = 1; i <= n-k; i++){
		sum_window_first = sum_window_first - a[i-1] + a[i+k-1];//i+k-1 la thang cuoi cung cua cua so tinh tu chi so i
		sum_max = max(sum_max, sum_window_first);//if
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
