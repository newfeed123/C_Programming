#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	int t; scanf("%d", &t);
	getchar();//khu enter
	while(t--){
		char c1[1000];
		
		fgets(c1, 1000, stdin);
		c1[strlen(c1)-1] = '\0';
		int ascii[256] = {0};
		for(int i = 0; i < strlen(c1); i++){
			ascii[c1[i]]++;
		}
		int dem = 0;
		for(int i = 0; i < 256; i++){
			if(ascii[i] != 0)
				dem++;
		}
		printf("%d\n", dem);
	}
}
