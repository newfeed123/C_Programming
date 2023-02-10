#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char c[1000], a[100][100], x[1000];
	fgets(c,1000,stdin);
	c[strlen(c)-1] = '\0';
	scanf("%s", x);
	
	char *token = strtok(c," ");
	int cnt = 0;
	while(token != NULL){
		if(strcmp(token,x) != 0)
			strcpy(a[cnt++], token);
		token = strtok(NULL," ");
	}
	for(int i = 0; i < cnt; i++)
		printf("%s ", a[i]);
}
