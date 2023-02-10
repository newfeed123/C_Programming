#include<stdio.h>
#include<string.h>
#include<ctype.h>
int check(char a[], int n){
	int l = 0, r = n-1;
	while(l < r){
		if(a[l] == a[r])
			return 0;
		l++; r--;
	}
	return 1;
}
int main(){
	int t; scanf("%d", &t);
	getchar();
	while(t--){
		char c[1000];
		fgets(c,1000,stdin);
		c[strlen(c)-1] = '\0';
		int ok = 1;
		int dem = 1;
		int max = 0;
		for(int i = 0; i < strlen(c)-1; i++){
			if(c[i] != c[i+1]){
				dem++;
			}
			else{
				if(dem >= max){
					max = dem;
					dem = 1;//reset	
				}
			}
		}
		printf("%d\n", dem);
	}
}
