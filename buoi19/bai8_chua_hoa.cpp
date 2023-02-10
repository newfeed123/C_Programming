#include<stdio.h>
#include<string.h>
#include<ctype.h>
void chuan_hoa(char a[]){
	a[0] = toupper(a[0]);
	for(int i = 1; i < strlen(a); i++)
		a[i] = tolower(a[i]);	
}
void viet_hoa(char a[]){
	for(int i = 0; i < strlen(a); i++)
		a[i] = toupper(a[i]);	
}
int main(){
	char c[1000], a[100][100];
	fgets(c,1000, stdin);
	c[strlen(c)-1] = '\0';
	char *token = strtok(c," ");
	int n = 0;
	while(token != NULL){
		strcpy(a[n++], token);
		token = strtok(NULL, " ");
	}
	chuan_hoa(a[n-1]);
	printf("%s, ", a[n-1]);
	for(int i = 0; i < n-1; i++){
		chuan_hoa(a[i]);
		if(i == n-2)
			printf("%s", a[i]);
		else
			printf("%s ",a[i]);
	}
}
