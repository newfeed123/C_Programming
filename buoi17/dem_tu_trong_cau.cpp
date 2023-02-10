#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	char c[1000];
	fgets(c,1000,stdin);
	c[strlen(c)-1] = '\0';
	char *token = strtok(c," ");
	int cnt = 0;
	while(token != NULL){
		cnt++;
		token = strtok(NULL," ");
	}
	printf("%d", cnt);
}
