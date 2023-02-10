#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char c[1000], a[100][100];
	fgets(c,1000,stdin);
	c[strlen(c)-1] = '\0';
	for(int i = 0; i < strlen(c); i++){
		c[i] = tolower(c[i]);
	}
	char *token = strtok(c," ");
	int cnt = 0;
	while(token != NULL){
		strcpy(a[cnt++], token);
		token = strtok(NULL," ");
	}
	for(int i = 0; i < cnt; i++){
		for(int j = 0; j < strlen(a[i]); j++){
			printf("%c ", a[i][j]);
		}
	}
}
