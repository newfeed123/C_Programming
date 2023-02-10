#include<stdio.h>
#include<string.h>
#include<ctype.h>
void chen(char a[], char b[], int p){
	int len_a = strlen(a);
	int len_b = strlen(b);
	char tmp[100];
	int cnt = 0;
	for(int i = p-1; i < len_a; i++){
		tmp[cnt++] = a[i];
	}
	printf("tmp = %s\n", tmp);
	int cnt_b = 0;
	for(int i = p-1; i < p+len_b; i++){
		a[i] = b[cnt_b++];
	}
	printf("a = %s\n", a);
	int cnt_tmp = 0;
	for(int i = p+len_b-1; i < len_a+len_b; i++){
		a[i] = tmp[cnt_tmp++];  
	}
}
int main(){
	char a[1000], b[1000];
	fgets(a,1000, stdin);
	a[strlen(a)-1] = '\0';
	fgets(b,1000, stdin);
	b[strlen(b)-1] = '\0';
	int p; scanf("%d", &p);
	chen(a,b,p);
	printf("%s", a);
	printf("\n%d", strlen(a));
}
