#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	char c[1000];
	fgets(c,1000,stdin);
	char *token = strtok(c," ");
	while(token != NULL){
		printf("%s\n", token);
		token = strtok(NULL," ");
	}
}
