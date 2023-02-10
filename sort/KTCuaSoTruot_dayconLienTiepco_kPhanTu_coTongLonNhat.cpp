#include<iostream>
using namespace std;
void nhapMang(int a[], int n){
	for(int i = 0; i < n; i++)
		cin>>a[i];
}
void xuatMang(int a[], int n){
	for(int i = 0; i < n; i++){
		cout<<a[i]<<"\t";
	}
	cout<<endl;
}
//cho 2 so n va k , tim day con lien tiep co k phan tu co tong lon nhat trong mang
//Input : 10 2
// 1 9 8 2 3 6 7 5 4 10
//Output : 17 

//Input : 7 3
// 1 2 7 4 3 9 8
//Output : 20
int main(){
	int n,k; cin>>n>>k;
	int a[n];
	nhapMang(a,n);
	int sum = 0;
	for(int i = 0; i < k; i++){
		sum += a[i];
	}
	int res = sum;
	for(int i = 1; i <= n-k; i++){
		//k phan tu lien tiep tinh tu vi tri i
		sum = sum - a[i-1] + a[i+k-1];
	}
	res = max(res,sum);
	cout<<res;
}
