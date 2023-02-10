#include<iostream>
using namespace std;

//O(nlogn) > O(n^2) , 
//worst case : O(n^2)
//dc sd nhieu nhat, on dinh nhat vs tap DL thuc te
void quick_sort(int a[], int l, int r){
	int i = l, j = r;
	int pivot = a[(l+r)/2];
//	if(l >= r)
//		return;
	while(i <= j){
		while(i < r && a[i] < pivot)
			i++;
		while(j > l && a[j] > pivot)
			j--;
		if(i <= j){ 
			int tmp = a[i];
			a[i] = a[j];
			a[j] = tmp;
			i++;
			j--;
		}
	}
	if(j > l) 
		quick_sort(a, l, j);
	if(i < r)
		quick_sort(a, i, r);
}

int main(){
	int n; cin>>n; int a[n];
	for(int i = 0; i < n; i++)
		cin>>a[i];
	quick_sort(a,0,n-1);
	for(int i = 0; i < n; i++)
		cout<<a[i]<<" ";
}
