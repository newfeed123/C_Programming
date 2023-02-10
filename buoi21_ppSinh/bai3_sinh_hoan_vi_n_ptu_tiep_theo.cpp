#include<bits/stdc++.h>
using namespace std;

int n, a[1000];
void next(){
	//1 2 3 9 8 7 6 5 4
	int i = n-1;
	while(i >= 1 && a[i] > a[i+1])
		--i;
	if(i == 0){
		for(int j = 1; j <= n; j++){
			a[j] = j;
	 	}
	}
	else{
		int j = n;
		while(a[j] < a[i])
			j--;
		swap(a[i], a[j]);
		int l = i+1, r = n;
		while(l < r){
			swap(a[l], a[r]);
			++l;
			--r;
		}
	}
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		scanf("%d",&n);
		for(int i = 1; i <= n; i++)
			scanf("%d", &a[i]);
		next();
		for(int i = 1; i <= n; i++)
			printf("%d ", a[i]);
		printf("\n");
	}
}


