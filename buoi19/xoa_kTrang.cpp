#include<stdio.h>
#include<string.h>
#include<ctype.h>
void xoa_1_ktrang(char a[]){
	for(int i = 0; i < strlen(a); i++){
		if(a[i] == ' '){
			for(int j = i; j < strlen(a); j++){
				a[j] = a[j+1];
			}
		}
	}
}
int main(){
	char a[1000];
	fgets(a,1000, stdin);
	a[strlen(a)-1] = '\0';
	xoa_ktrang(a);
	printf("%s", a);
	printf("\n%d", strlen(a));
}
