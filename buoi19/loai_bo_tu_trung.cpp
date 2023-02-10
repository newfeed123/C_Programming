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
	int check[1000] = {0};
	for(int i = 0; i < cnt-1; i++){
		for(int j = i+1; j < cnt; j++){
			if(strcmp(a[i], a[j]) == 0 && check[i] == 0){
				check[j] = 1;
			}
		}
	}
	for(int i = 0; i < cnt; i++){
		if(check[i] == 0){
			printf("%s ",a[i]);
		}
	}
}
