#include<iostream>
using namespace std;
//ky thuat 2 con tro : 
//kiem tra mang doi xung palindrome : 1234321
int check_mang_doi_xung(int a[], int n){
	int l = 0, r = n-1;
	while(l < r){
		if(a[l] != a[r])
			return 0;
		++l;
		--r;
	}
	return 1;
}
/
int main(){

	int n; cin>>n;
	int a[n];
	
}
