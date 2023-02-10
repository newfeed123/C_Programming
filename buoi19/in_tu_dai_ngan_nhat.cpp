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
	char c[100], max[100], min[100];
	fgets(c,100,stdin);
	c[strlen(c)-1] = '\0';
	char *token = strtok(c," ");
	int max_len = 0, min_len = 1e9;
	char *a, *b;
	while(token != NULL){
		int len = strlen(token);
		if(len > max_len){
			max_len = len;
			strcpy(max,token);
			//a = token
		}
		if(len < min_len){
			min_len = len;
			strcpy(min, token);
			//b = token
		}
		token = strtok(NULL, " ");
	}
	printf("%s %s", min, max);
}
