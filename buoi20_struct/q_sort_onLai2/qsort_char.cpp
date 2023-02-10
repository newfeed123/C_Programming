#include<bits/stdc++.h>
using namespace std;

int cmp(const void *a, const void *b){
	char *x = (char*) a;
	char *y = (char*) b;
	if(strcmp(x,y) < 0)
		return -1;//sx theo tu dien
	return 1;
}
int cmp_len(const void *a, const void *b){
	char *x = (char*) a;
	char *y = (char*) b;
	
//	int len1 = strlen(x);
//	int len2 = strlen(y);
//	if(len1 < len2)
//		return -1;//sx theo do dai tang dan
//	return 1;
	
	//sx theo do dai tang dan , cung do dai thi sx giam dan theo tu dien
	if(len1 != len2){
		if(len1 < len2)
			return -1;
		return 1;
	}
	else{
		if(stcmp(x,y) > 0)
			return -1;
		return 1;
	}
}
int main(){
	char c[1000], a[100][100];
	gets(c);
	char *token = strtok(c," ");
	int n = 0;
	while(token != NULL){
		strcpy(a[n++], token); 
		token = strtok(NULL," ");
	}
	qsort(a,n, sizeof(a[0]),cmp);
	for(int i = 0; i < n; i++)
		cout<<a[i]<<" ";
	//a[0] : kich thuoc cua 1 phan tu can sx
	// hoac 100*sizeof(char) : vi moi a[i] co 100 phan tu char ( a[100][100] )
}


