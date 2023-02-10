#include<stdio.h>
#include<string.h>
#include<ctype.h>
int check(char a[][100], int n){
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
		char c[1000], a[100][100];
		fgets(c,1000,stdin);
		c[strlen(c)-1] = '\0';
		
		char *token = strtok(c," ");
		int cnt = 0;
		while(token != NULL){
			strcpy(a[cnt++], token);
			token = strtok(NULL," ");
		}
		
		if(cnt == 1){
			int ok = 1;
			int l = 0, r = strlen(a[cnt-1])-1;
			while(l < r){
				if(a[0][l] != a[0][r]){
					ok = 0; 
					break;
				}
				l++; r--;
			}
			if(ok)
				printf("YES\n");
			else
				printf("NO\n");
		}
		else if(cnt > 1){
			if(check(a,cnt))
				printf("YES\n");
			else
				printf("NO\n");
		}
	}
}
