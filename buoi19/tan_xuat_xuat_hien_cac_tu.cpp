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
	int check[cnt] = {0};
	for(int i = 0; i < cnt; i++){
		if(check[i] == 0){
			int dem = 1;
			for(int j = i+1; j < n; j++){
				if(strcmp(a[i], a[j]) == 0){
					dem++;
					check[j] = 1;//tu trung voi a[i] roi nen danh dau de ko xet lai
				}
			}
			printf("%s %d\n", a[i], dem);
		}
	}
}
