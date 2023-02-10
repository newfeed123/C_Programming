#include<stdio.h>
#include<string.h>
#include<ctype.h>
int check_token_upper(char c[]){
	for(int i = 0; i < strlen(c);i++){
		if(islower(c[i]))
			return 0;
	}
	return 1;
}
int main(){
	char c[100], tmp[100];
	fgets(c,100,stdin);
	c[strlen(c)-1] = '\0';
	char *token = strtok(c," ");
	int cnt = 0;
	while(token != NULL){
		if(check_token_upper(token))
			printf("%s ", token);
		token = strtok(NULL, " ");
	}
}
