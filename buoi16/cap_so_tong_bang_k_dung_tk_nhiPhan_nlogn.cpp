#include<iostream>
#include<algorithm>
using namespace std;

int tk_nhiPhan(int a[], int left, int right, int x){
	//tim kiem xem x co xh trong mang khong ap dung tk nhi phan
	while(left <= right){
		int mid = (left+right)/2;
		if(x == a[mid])
			return 1;
		else if(x > a[mid])
			left = mid + 1;
		else
			right = mid - 1;
	}
	return 0;
}

int main(){
	int n, k; cin>>n>>k; int a[n];
	for(int i = 0; i < n; i++)
		cin>>a[i];
	sort(a, a+n);//O(nlogn)
	int dem = 0;
	for(int i = 0; i < n; i++){//O(n)
		if(tk_nhiPhan(a,i+1,n-1,k-a[i]))//do phuc tao cua tk_nhiPhan la O(logn)
			dem++;
	}
	// nlohn + nlogn < n^2 : n^2 la duyet 2 vong for so sanh a[i] va a[j] ( j = i+1-> n-1)
	cout<<dem;
}
