#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char c[1000];
	//mot mang char co toi da 100 dong , moi dong 100 ky tu
	gets(c);
	c[strlen(c)-1] = '\0';
	char *token = strtok(c," ");
	int n = 0;
	char a[1000][1000];
	while(token != NULL){
		strcpy(a[n], token);
		++n;
		token = strtok(NULL," ");
	}
	for(int i = 0; i < n; i++){
		printf("%s\n", a[i]);
	}
}
