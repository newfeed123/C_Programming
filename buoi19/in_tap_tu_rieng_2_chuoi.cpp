#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char c[1000], c2[1000], a[100][100], b[100][100];
	fgets(c,1000,stdin);
	c[strlen(c)-1] = '\0';
	fgets(c2,1000,stdin);
	c2[strlen(c2)-1] = '\0';
	
	char *token = strtok(c," ");
	int cnt1 = 0;
	while(token != NULL){
		strcpy(a[cnt1++], token);
		token = strtok(NULL," ");
	}
	token = strtok(c2," ");
	int cnt2 = 0;
	while(token != NULL){
		strcpy(b[cnt2++], token);
		token = strtok(NULL," ");
	}
	for(int i = 0; i < cnt1; i++){
		int ok = 1;
		for(int j = 0; j < cnt2; j++){
			if(strcmp(a[i],b[j]) == 0){
				ok = 0;
			}
		}
		if(ok == 1)
			printf("%s ", a[i]);
	}
}
