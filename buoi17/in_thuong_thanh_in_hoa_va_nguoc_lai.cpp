#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	char c[1000];
	fgets(c,1000,stdin);
	c[strlen(c)-1] = '\0';
	for(int i = 0; i < strlen(c); i++){
		if(islower(c[i]))
			c[i] = toupper(c[i]);
		else if(isupper(c[i]))
			c[i] = tolower(c[i]);
	}
	printf("%s", c);
}
