#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	int t; scanf("%d", &t);
	getchar();
	while(t--){
		char c[1000];
//		fgets(c,1000,stdin);
//		c[strlen(c)-1] = '\0';
		scanf("%s",c);
		int ascii[26] = {0};
		for(int i = 0; i < strlen(c); i++){
			if(ascii[c[i]-'a'] == 0){
				printf("%c",c[i]);
				ascii[c[i]-'a'] = 1;//in xong danh dau la 1 de neu gap lai se khong in nua
			}
		}
	}
}
