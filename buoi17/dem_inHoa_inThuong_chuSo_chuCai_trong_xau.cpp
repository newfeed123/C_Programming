#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

//cac ham trong chuoi C:

//islower(char c) : tra ve 1 neu c la ki tu in thuong, ngc lai 0
//isupper(char c) : tra ve 1 neu c la ki tu in hoa, ngc lai 0
//isdigit(char c) : tra ve 1 neu c la ki tu chu so, ngc lai 0
//isalpha(char c) : tra ve 1 neu c la ki tu chu cai, ngc lai 0
int count_Lower(char c[]){
	int count = 0;
	for(int i = 0; i < strlen(c); i++){
		if(c[i] >= 'a' && c[i] <= 'z')
			count++;
	}
	return count;
}
int count_Upper(char c[]){
	int count = 0;
	for(int i = 0; i < strlen(c); i++){
		if(c[i] >= 'A' && c[i] <= 'Z')
			count++;
	}
	return count;
}
int count_Digit(char c[]){//digit : chu so
	int count = 0;
	for(int i = 0; i < strlen(c); i++){
		if(c[i] >= '0' && c[i] <= '9')
			count++;
	}
	return count;
}
int count_Alpha(char c[]){//Alpha : chu cai
	int count = 0;
	for(int i = 0; i < strlen(c); i++){
		if((c[i] >= 'A' && c[i] <= 'Z') || (c[i] >= 'a' && c[i] <= 'z'))
			count++;
	}
	return count;
}
int main(){
	char c[100];
	scanf("%s", c);//stop khi gap enter hoac space hoac tab
	int c_lower = count_Lower(c);
	printf("so ky tu in thuong la : %d\n", c_lower);
	int c_digit = count_Digit(c);
	printf("so luong chu so la : %d\n", c_lower);
}
