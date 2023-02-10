#include<iostream>
using namespace std;

void merge_2_mang(int a[], int b[], int n, int m){
	//tron 2 mang da sap xep thanh 1 mang
	int i = 0, j = 0, k = 0;//i ung voi mang a, j ung voi mang b, k ung voi mang c
	int c[m+n];
	while(i < n && j < m){
		//con cap de so sanh thi van tiep tuc
		if(a[i] <= b[j]){
			c[k] = a[i];//a[i] nho hon, a[i] se dc cho vao mang C trc
			k++;
			i++;
		}
		else{
			//b[i] nho hon
			c[k] = b[j];
			k++;
			j++;
		}
	}
	//cho not vao mang c
	while(i < n){
		c[k] = a[i];
		i++;
		k++;
	}
	while(j < m){
		c[k] = b[j];
		j++;
		k++;
	}
	//in mang da hop
	for(int i = 0; i < n+m; i++)
		cout<<c[i]<<" ";
}

void merge_1_mang(int a[], int l, int m, int r){
	// tron mang bat dau tu l->m va tu m+1->r
	//tron luon tren 1 mang a[] => tach thanh 2 mang x, y
	int len1 = m-l+1; //so luong phan tu cua 1 nua ben trai
	int len2 = r-m;//so luong phan tu nua ben phai
	int x[len1], y[len2];//luu tam 2 nua ra 2 mang
	for(int i = 0; i < len1; i++){
		x[i] = a[l+i];
	}
	for(int i = 0; i < len2; i++){
		y[i] = a[m+1+i];
	}
	
	int i = 0, j = 0, k = l;//i ung voi mang x, j ung voi mang y, k ung voi mang hop
	while(i < len1 && j < len2){
		if(x[i] <= y[j]){
			a[k] = x[i];
			k++;i++;
		}
		else{
			a[k] = y[j];
			k++;j++;
		}
	}
	while(i < len1){
		a[k] = x[i];
		i++;k++;
	}
	while(j < len2){
		a[k] = y[j];
		j++;k++;
 	}
}
void merge_sort(int a[], int l, int r){
	if(l >= r)
		return;
	int mid = (l+r)/2;
	merge_sort(a,l,mid);
	merge_sort(a,mid+1,r);
	merge_1_mang(a,l,mid,r);
}
int main(){
	int n; cin>>n; int a[n];// b[m];
	for(int i = 0; i < n; i++)
		cin>>a[i];
//	for(int i = 0; i < m; i++)
//		cin>>b[i];
	merge_sort(a,0,n-1);
	for(int i = 0; i < n; i++)
		cout<<a[i]<<" ";
}
