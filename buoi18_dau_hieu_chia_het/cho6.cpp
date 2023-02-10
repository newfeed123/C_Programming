#include<stdio.h>
#include<string.h>
#include<ctype.h>
//chia het cho 6 : chia het cho ca 2 va 3
int check(char a[]){
	int sum_cs = 0;
	for(int i = 0; i < strlen(a); i++){
		sum_cs += a[i]-'0';
	}
	if((a[strlen(a)-1]-'0') % 2 == 0 &&  sum_cs % 3 == 0)
		return 1;
	else
		return 0;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char c[10000];
		scanf("%s", c);
		if(check(c))
			printf("YES");
		else
			printf("NO");
	}
}
