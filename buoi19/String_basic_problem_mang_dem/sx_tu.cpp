#include<stdio.h>
#include<string.h>
#include<ctype.h>
void sort_bubble(char a[][100], int n){
	for(int i = 0; i < n-1; i++){
		for(int j = 0; j < n-1; j++){
			if(strcmp(a[j],a[j+1]) == 1){
				char tmp[100];
				strcpy(tmp,a[j]);
				strcpy(a[j], a[j+1]);
				strcpy(a[j+1], tmp);
			}
		}
	}
}
int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char c[1000], a[100][100];
		fgets(c, 1000, stdin);
		c[strlen(c)-1] = '\0';
		
		char *token = strtok(c," ");
		int n = 0;
		while(token != NULL){
			strcpy(a[n++], token);
			token = strtok(NULL," ");
		}
		sort_bubble(a,n);
		for(int i = 0; i < n; i++){
			if(i == n-1)
				printf("%s\n",a[i]);
			else
				printf("%s ", a[i]);
		}
	}
}
