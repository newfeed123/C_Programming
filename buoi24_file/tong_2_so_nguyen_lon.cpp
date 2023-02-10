#include<bits/stdc++.h>
using namespace std;

void lat_mang(int a[], int n){
	int l = 0, r = n-1;
	while(l < r){
		swap(a[l], a[r]);
		++l;
		--r;
	}
}
void tong(char a[], char b[]){
	int n1 = strlen(a);
	int n2 = strlen(b);
	//chuyen ve dang so : khai bao 2 mang so1, so2, tong
	// so luong phan tu cua mang so2 la n1 vi se cho them so 0 vao
	// so luong phan tu cua mang tong se la n1 + 1 vi so luong chu so co the tang them 1 so sau khi tinh tong 2 so
	int so1[n1], so2[n1], tong[n1 + 1];
	for(int i = 0; i < n1; i++)	so1[i] = a[i] - '0';
	for(int i = 0; i < n2; i++)	so2[i] = b[i] - '0';
	lat_mang(so1,n1); lat_mang(so2,n2);
	//them so 0 vao so2 ( vi n2 < n1 )
	for(int i = n2; i < n1; i++) so2[i] = 0;
	//for de cong
	int nho = 0;
	int cnt = 0;//bien dem cho mang tong[]
	for(int i = 0; i < n1; i++){
		int tmp = so1[i] + so2[i] + nho;
		tong[cnt] = tmp % 10;
		nho = tmp / 10;
		cnt++;
		
	}
	if(nho){
		tong[++cnt] = nho;//neu cong 2 chu so cuoi cung van con nho thi phai them vao mang
	}
	for(int i = cnt-1; i >= 0; i--)
		cout<<tong[i];
}
int main(){
	char a[100], b[100];
	cin>>a>>b;
	if(strlen(a) > strlen(b))
		tong(a,b);
	else
		tong(b,a);
}


