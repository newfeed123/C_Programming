#include<stdio.h>
#include<string.h>
#include<ctype.h>
void chuanHoa(char c[]){
	//nhap xong doi thanh in thuong het, viet hoa chu cai dau
	c[0] = toupper(c[0]);
	for(int i = 1; i < strlen(c); i++){
		c[i] = tolower(c[i]);	
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
	for(int i = 1; i < n-1; i++){
		chuanHoa(a[i]);
		printf("%s ", a[i]);	
	}
	chuanHoa(a[n-1]);
	printf("%s, ", a[n-1]);
	chuanHoa(a[0]);
	printf("%s",a[0]);
}
