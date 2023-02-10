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
//	int max = 0, pos = -1;
//	int check[1000] = {0};//check gia tri xua hien
//	int check_fre[1000] = {0};//check xem da xet chua
//	for(int i = 0; i < cnt-1; i++){
//		check[i] = 1;
//		for(int j = i+1; j < cnt; j++){
//			if((strcmp(a[i],a[j]) == 0) && check_fre[i] == 0){
//				check[i]++;
//				check_fre[j] = 1;
//			}
//		}
//		if(check[i] > max){
//			max = check[i];
//			pos = i;
//		}
//	}
//	printf("%s %d", a[pos], max);
	int max = 0;
	char res[100];
	for(int i = 0; i < cnt-1; i++){
		int dem = 1;//xet a[i] : xuat hien 1 lan
		for(int j = i+1; j < cnt; j++){
			if(strcmp(a[i],a[j]) == 0)
				dem++;
		}
		if(dem > max){
			max = dem;
			strcpy(res, a[i]);
		}
	}
	printf("%s %d", res, max);
}
