#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char c[1001];
	fgets(c,1001,stdin);
	c[strlen(c)-1] = '\0';
	
//	for(int i = 0; i < strlen(c); i++){
//		if(c[i] >= 'a' && c[i] <= 'z')
//			c[i] = c[i] - 32;
//	}
	for(int i = 0; i < strlen(c); i++){
		if(c[i] >= 'A' && c[i] <= 'Z')
			c[i] = c[i] + 32;
	}
	printf("%s", c);
}
