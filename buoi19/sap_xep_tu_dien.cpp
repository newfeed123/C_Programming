#include<stdio.h>
#include<string.h>
#include<ctype.h>
void sort(char a[][100], int n){
	for(int i = 0; i < n-1; i++){
		int min = i;
		for(int j = i+1; j < n; j++){
			if(strcmp(a[j], a[min])){
				//tra ve 1 tuc la a[min] < a[j]
				min = j;
			}
		}
		//hoan doi 2 tu a[i] va a[min]
		char tmp[100];
		strcpy(tmp,a[i]);
		strcpy(a[i],a[min]);
		strcpy(a[min],tmp); 
	}
}
int main(){
	char c[1000], a[100][100];
	fgets(c,1000,stdin);
	c[strlen(c)-1] = '\0';

	//tach tu
	char *token = strtok(c," ");
	int n = 0;
	while(token != NULL){
		strcpy(a[n++], token);
		token = strtok(NULL," ");
	}
	sort(a,n);
	for(int i = 0; i < n; i++)
		printf("%s ", a[i]);
}
