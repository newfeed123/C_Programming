#include<iostream>
#include<algorithm>
using namespace std;
//cho 1 mang da sx
int first_pos(int a[], int n, int x){
	int left = 0, right = n - 1;
	int pos = -1;
	while(left <= right){
		int mid = (left + right)/2;
		if(x == a[mid]){
			pos = mid;
			right = mid-1;//tim tiep xem ben trai con x nua khong
		}
		else if(x < a[mid])
			right = mid - 1;
		else
			left = mid + 1;
	}
	return pos;
}

int last_pos(int a[], int n, int x){
	int left = 0, right = n - 1;
	int pos = -1;
	while(left <= right){
		int mid = (left + right)/2;
		if(x == a[mid]){
			pos = mid;
			left = mid+1;//tim tiep xem ben pahi con x nua khong
		}
		else if(x < a[mid])
			right = mid - 1;
		else
			left = mid + 1;
	}
	return pos;
}
int main(){
	int n, x; cin>>n>>x;
	int a[n];
	for(int i = 0; i < n; i++)
		cin>>a[i];
	//nhap mang da sx
	int first = first_pos(a,n,x);
	int last = last_pos(a,n,x);
	if(first == -1)
		cout<<"ko co "<<x<<" trong mang";
	else
		cout<<"so luong "<<x<<" trong mang "<<last-first+1;
}
