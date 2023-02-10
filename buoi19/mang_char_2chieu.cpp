#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char c[100][100];
	strcpy(c[0], "python");
	strcpy(c[1], "C++");
	strcpy(c[2], "java");
	strcpy(c[3], "PHP");
	printf("%s ",c[0]);
	printf("%c\n",c[0][1]);
	
}
