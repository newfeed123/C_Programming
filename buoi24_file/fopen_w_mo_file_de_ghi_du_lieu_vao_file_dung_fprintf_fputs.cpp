#include<bits/stdc++.h>
using namespace std;

int main(){
	FILE *ptr;
	ptr = fopen("abc2.txt", "w");//mo file ra de ghi du lieu vao file , neu file abc2.txt da co du lieu thi se bi xoa het de ghi du lieu moi
	if(ptr == NULL)
		printf("ERROR !");
	else{
		fprintf(ptr,"%s %d\n", "asdasdasd", 99);
		fputs("xau can ghi", ptr);	
	}
}


