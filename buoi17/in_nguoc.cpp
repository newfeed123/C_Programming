#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	char c[1000];
	fgets(c,1000,stdin);
	c[strlen(c)-1] = '\0';
	for(int i = strlen(c)-1; i >= 0; i--){
		if(c[i] != ' ')
			printf("%c ",c[i]);
	}
}
