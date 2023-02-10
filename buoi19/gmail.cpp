#include<stdio.h>
#include<string.h>
#include<ctype.h>
void in_thuong(char c[]){
	for(int i = 0; i < strlen(c); i++)
		c[i] = tolower(c[i]);
}
int main(){
	char c[1000], a[100][100];
	fgets(c,1000,stdin);
	c[strlen(c)-1] = '\0';
	in_thuong(c);
	char *token = strtok(c," ");
	int cnt = 0;
	while(token != NULL){
		strcpy(a[cnt++], token);
		token = strtok(NULL," ");
	}
	printf("%s", a[cnt-1]);
	for(int i = 0; i < cnt-1; i++){
		printf("%c", a[i][0]);//in 1 ky tu
	}
	printf("@gmail.com");
}
