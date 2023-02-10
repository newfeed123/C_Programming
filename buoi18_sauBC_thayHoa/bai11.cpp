#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int kt_upper(char c[]){
	for(int i = 0; i < strlen(c); i++){
		if(islower(c[i]))
			return 0;//gap bat ky 1 kt thuong
	}
	return 1;
}
int main(){
	char c[1000];
	gets(c);
	char *token = strtok(c," ");
	while(token != NULL){
		if(kt_upper(token) == 1)
			printf("%s", token);
		token = strtok(NULL," ");
	}
}
