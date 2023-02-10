#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char c[1000], a[100][100];
	fgets(c,1000,stdin);
	c[strlen(c)-1] = '\0';
	for(int i = 0; i < strlen(c); i++){
		c[i] = tolower(c[i]);
	}
	char *token = strtok(c," ");
	int cnt = 0;
	while(token != NULL){
		strcpy(a[cnt++], token);
		token = strtok(NULL," ");
	}
	int check[1000] = {0};
	for(int i = 0; i < cnt; i++){
		int ok = 1;
		for(int j = 0; j < i; j++){
			if(strcmp(a[i], a[j]) == 0){
				//xet a[i] va nhung phan tu a[j]
				// j : 0->i-1 , tuc la nhung thang dung truoc no , neu xuat hien => ok = 0 va break; de chuyen sang tu (i+1) tiep theo
				ok = 0;
				break;
			}
		}
		if(ok)
			printf("%s ",a[i]);
	}
}
