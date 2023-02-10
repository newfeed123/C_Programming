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
	int max = -1e9;
	for(int i = 0; i <= n-k; i++){
		int sum = 0;
		for(int j = i; j < k+i; j++){
			//k phan tu lien tiep tinh tu vi tri i
			sum += a[j];
		}
		if(sum > max)
		max = sum;
	}
	cout<<max;
}
