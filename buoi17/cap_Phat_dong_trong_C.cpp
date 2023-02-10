#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;//so phan tu muon
	scanf("%d", &n);
	int *c = (int*)malloc(n*sizeof(int));//n so luong phan tu can cap phat , (int*) la ep kieu sang poiter
	//malloc : memory allocation (cap phat bo nho ) , sizeof : kich thuoc kieu du lieu theo btye , co the viet n*4 , vi int la 4 byte
	for(int i = 0; i < n; i++)
		scanf("%d", &c[i]);
	free(c);
}
