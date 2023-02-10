#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
int main(){
	int cnt_0 = 0, cnt_1 = 0;
	char c[1000];
	scanf("%s", c);
	for(int i = 0; i < strlen(c); i++){
		if(c[i] == '0'){
			cnt_0++;
		}
		if(c[i] == '1'){
			cnt_1++;
		}
	}
	printf("%d", abs(cnt_0-cnt_1));
}
