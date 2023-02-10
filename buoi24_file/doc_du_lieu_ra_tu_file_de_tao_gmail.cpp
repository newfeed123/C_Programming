#include<bits/stdc++.h>
using namespace std;

int main(){
	FILE *ptr;
	ptr = fopen("hoten.txt", "r");
	FILE *ptr2;
	ptr2 = fopen("email.txt", "w");
	char name[100], a[20][20];
	while(fgets(name,100,ptr) != NULL){
		name[strlen(name)-1] = '\0';//khu enter
		strlwr(name);//viet thuong het 
		char *token = strtok(name, " ");//lay tu dau tien
		int cnt = 0;
		while(token != NULL){
			strcpy(a[cnt++], token);
			token = strtok(NULL, " ");//duyet cac tu con lai
		}
		fprintf(ptr2,"%s", a[cnt-1]);
		for(int i = 0; i < cnt-1; i++){
			fprintf(ptr2,"%c", a[i][0]);//lay ky tu dau : nguyen -> n
		}
		fprintf(ptr2,"@gmail.com\n");
	}
}


