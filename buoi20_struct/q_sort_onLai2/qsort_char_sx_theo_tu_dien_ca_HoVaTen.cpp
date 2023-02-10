#include<bits/stdc++.h>
using namespace std;

char* convert(char c[]){
	int n = 0;
	char a[100][100];
	char *token = strtok(c," ");
	while(token != NULL){
		strcpy(a[n++],token);
		token = strtok(NULL," ");
	}
	//nguyen van long => longnguyenvan
	char res[100];
	strcpy(res, a[n-1]);
	for(int i = 0; i < n-1; i++){
		strcat(res,a[i]);//noi chuoi
	}
	char *kq = res;
	return kq;//muon tra ve char[] thi phai dung char* o dau ham
	//tuc la con tro se quan ly mang ban tra ve
}
int cmp(const void *a, const void *b){
	char *x = (char*) a;
	char *y = (char*) b;
	
	char *x1 = convert(x);
	char tmp[100]; strcpy(tmp, x1);
	
	char *y1 = convert(y);
	char tmp2[100]; strcpy(tmp2, y1);
	
	if(strcmp(tmp,tmp2) < 0)
		return -1;
	return 1;
}
int main(){
	int n; cin>>n;
	getchar();
	char a[100][100];
	for(int i = 0; i < n; i++){
		gets(a[i]);
	}
	qsort(a,n,sizeof(a[0]), cmp);
	for(int i = 0; i < n; i++){
		cout<<a[i]<<endl;
	}
}


