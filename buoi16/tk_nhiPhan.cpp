#include<iostream>
using namespace std;
//TK nhi phan : mang phai dc sx , O(logn)
void quick_sort(int a[], int left, int right){
	int i = left, j = right;
	int pivot = a[(left+right)/2];
	while(i <= j){
		while(a[i] < pivot && i < right)
			i++;
		while(a[j] > pivot && j > left)
			j--;
		if(i <= j){
			int tmp = a[i];
			a[i] = a[j];
			a[j] = a[i];
			i++;
			j--;
		}
	}
	if(i < right)
		quick_sort(a,i,right);
	if(j > left)
		quick_sort(a,left,j);
}
int tk_nhiPhan(int a[], int n, int x){
	int left = 0, right = n-1;
	while(left <= right){
		int mid = (left+right)/2;//cu moi vong lap t co left va right moi => can tinh mid moi
		if(x == a[mid])
			return 1;
		if(x > a[mid])
			left = mid+1;
		else
			right = mid - 1;
	}
	return 0;
}
int cmp(const void *a, const void *b){
	return *(int *)a - *(int *)b;
}
int main(){
	int n; cin>>n; int a[n];
	for(int i = 0; i < n; i++)
		cin>>a[i];
	qsort(a,n,sizeof(int),cmp);
	for(int i = 0; i < n; i++)
		cout<<a[i]<<" ";
}
