#include<stdio.h>
#include<string.h>
#include<ctype.h>
int check(char a[]){
	int l = 0, r = strlen(a)-1;
	while(l <= r){
		if(a[l] != a[r] || ((a[l]-'0') % 2 != 0) || ((a[r] - '0') % 2 != 0))
			return 0;
		l++; r--;
	}
	return 1;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char c[10000];
		scanf("%s", c);
		if(check(c))
			printf("YES");
		else
			printf("NO");
	}
}
