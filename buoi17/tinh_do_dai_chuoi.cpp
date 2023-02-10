#include<stdio.h>
#include<string.h>
#include<ctype.h>
int ham_strlen(char c[]){
	int i = 0, cnt = 0;
	while(c[i] != '\0'){
		cnt++;
		i++;
	}
	return cnt;
}
int main(){
	char c[1001];
	fgets(c,1001,stdin);
	c[ham_strlen(c)-1] = '\0';
	int length = ham_strlen(c);
	printf("do dai chuoi : %d", length);
}
