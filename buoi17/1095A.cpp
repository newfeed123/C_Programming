#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	int n;
	scanf("%d", &n);
	char c[n+1];
	scanf("%s",c);
	int cnt = 0;
	for(int i = 0; i < n; i = i + cnt){
		printf("%c", c[i]);
		cnt++;
	}
}
