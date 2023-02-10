#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	char c[1000];
	scanf("%s", c);
	int cnt_0 = 0, cnt_1 = 0, cnt_2 = 0;
	for(int i = 0; i < strlen(c); i++){
		if(isalpha(c[i]))
			cnt_0++;
		else if(isdigit(c[i]))
			cnt_1++;
		else
			cnt_2++;
	}
	printf("%d %d %d", cnt_0, cnt_1, cnt_2);
}
