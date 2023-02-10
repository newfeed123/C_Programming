#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main(){
	char c[100];//100 ko phai so luong ki tu trong chuoi ma la capacity ( suc chua toi da cua mang ki tu )
	scanf("%s", c);//%s : string
	//strlen(c);//so luong ki tu trong chuoi da nhap
	printf("chieu dai cua chuoi : %d", strlen(c));
	//duyet de in ra tung ky tu trong c
	for(int i = 0; i < strlen(c); i++)
		printf("%c ", c[i]);//%c : char	
}
