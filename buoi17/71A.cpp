#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char c[105];
		scanf("%s", c);
		if(strlen(c) > 10)
			printf("%c%d%c\n", c[0], strlen(c)-2, c[strlen(c)-1]);
		else
			printf("%s\n", c);
	}
	
}
