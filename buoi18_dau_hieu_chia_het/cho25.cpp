#include<stdio.h>
#include<string.h>
#include<ctype.h>
//chia het cho 25 : 2 chu so tan cung la hai so 0 hoac 2 chu so cuoi cung chia het 25
int check(char c[]){
	char a[2];
	a[0] = c[strlen(c)-2];
	a[1] = c[strlen(c)-1];
	int so = (a[0]-'0')*10 + (a[1]-'0');
	for(int i = 0; i < strlen(c); i++){
		if(so % 25 == 0 || (c[strlen(c)-1] == '0' && c[strlen(c)-2] == '0'))
			return 1;
		else
			return 0;
	}
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char c[10000];
		scanf("%s", c);
		if(check(c))
			printf("YES\n");
		else
			printf("NO\n");
	}
}
