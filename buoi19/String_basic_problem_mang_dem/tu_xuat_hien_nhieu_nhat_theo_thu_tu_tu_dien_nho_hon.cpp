#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char c[1000], a[100][100];
		fgets(c, 1000, stdin);
		c[strlen(c)-1] = '\0';
		
		char *token = strtok(c," ");
		int n = 0;
		while(token != NULL){
			strcpy(a[n++], token);
			token = strtok(NULL," ");
		}
		
		char res[100];//luu tu can in
		int check[100] = {0};
		int max = 0;
		for(int i = 0; i < n-1; i++){
			int dem = 1;
			for(int j = i + 1; j < n; j++){
				if((strcmp(a[i], a[j]) == 0) && check[j] == 0){
					dem++;
					check[j] = 1;//ko can xet tai vi tri nay nua
				}
			}
			if(dem == max){
				max = dem;
				if(strcmp(a[i],res) == -1)
					strcpy(res,a[i]);
			}
			else if(dem > max){
				max = dem;
				strcpy(res,a[i]);
			}
		}
		printf("%s %d\n", res, max);
	}
}
