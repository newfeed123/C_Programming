#include<stdio.h>
#include<string.h>
#include<ctype.h>
void xoa(char a[], int p){
	for(int i = p; i < strlen(a); i++)
		a[i] = a[i+1];
}
int main(){
	char a[1000];
	fgets(a,1000, stdin);
	a[strlen(a)-1] = '\0';
	int p; scanf("%d", &p);
	xoa(a,p);
	printf("%s", a);
}
