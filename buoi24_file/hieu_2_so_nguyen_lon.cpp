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
void hieu(char a[], char b[]){
	int n1 = strlen(a), n2 = strlen(b);
	int so1[n1], so2[n1], hieu[n1+1];
	for(int i = 0; i < n1; i++) so1[i] = a[i] - '0';
	for(int i = 0; i < n2; i++) so2[i] = b[i] - '0';
	lat_mang(so1,n1); lat_mang(so2, n2);
	for(int i = n2; i < n1; i++) so2[i] = 0;
	int nho = 0, cnt = 0;
	for(int i = 0; i < n1; i++){
		int tmp = so1[i] - so2[i] - nho;
		if(tmp < 0){
			hieu[cnt] = so1[i] + 10 - so2[i] - nho;
			nho = 1;
			cnt++;
		}
		else{
			nho = 0;
			hieu[cnt++] = so1[i] - so2[i];
		}
	}
	//in ra : TH1 : 0000000000 -> 0 ; TH2 : 00012300 -> 321000
	int i = cnt-1;
	while(hieu[i] == 0)
		--i;
	if(i == -1)
		cout<<0;//TH1
	else{
		//TH2 : ket thuc while tim dc vi tri i ma phan tu khac 0
		while(i >= 0)
			cout<<hieu[i--];
	}
}
int main(){
	char a[1000], b[1000];
	scanf("%s%s", &a, &b);
	if(strlen(a) > strlen(b) || strlen(a) == strlen(b) && strcmp(a,b) > 0)
		hieu(a,b);
	else
		hieu(b,a);
}


