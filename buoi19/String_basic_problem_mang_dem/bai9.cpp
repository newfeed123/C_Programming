#include<stdio.h>
#include<string.h>
#include<ctype.h>
int check(char a[], int n){
	for(int i = 0; i < n-1; i++){
		if(a[i] == a[i+1])
			return 1;
	}
	return 0;
}
int main(){
	int t; scanf("%d", &t);
	getchar();
	while(t--){
		char c[1000], a[100][100];
		fgets(c,1000,stdin);
		c[strlen(c)-1] = '\0';
		
		char *token = strtok(c," ");
		int cnt = 0;
		while(token != NULL){
			strcpy(a[cnt++], token);
			token = strtok(NULL," ");
		}
		int ok = 0;
		for(int i = 0; i < cnt; i++){
			if(check(a[i], strlen(a[i]))){
				ok = 1;//giong nhau danh dau ok = 1 va break luon 
				break;
			}
		}
		if(ok)
			printf("YES\n");
		else
			printf("NO\n");
	}
}
