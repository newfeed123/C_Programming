#include<stdio.h>
#include<string.h>
#include<ctype.h>
int isvowel(char c){
	if(c == 'u'|| c == 'e' || c == 'i' || c == 'y' || c == 'o' || c == 'a')
		return 1;
	return 0;
}
int main(){
	char c[1000];
	scanf("%s", c);
	for(int i = 0; i < strlen(c); i++){
		if(!isvowel(c[i])){
			printf(".%c", tolower(c[i]));
		}
	}
}
