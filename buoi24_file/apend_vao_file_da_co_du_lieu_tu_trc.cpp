#include<bits/stdc++.h>
using namespace std;

int main(){
	FILE *ptr;
	ptr = fopen("abc3.txt", "a");//mo file ra de ghi du lieu vao file dung w, neu file abc2.txt da co du lieu thi se bi xoa het de ghi du lieu moi
	//nen neu muon ghi tiep vao file ta dung "a" : append
	if(ptr == NULL)
		printf("ERROR !");
	else{
		fprintf(ptr,"%s %d\n", "apend", 100);
		fputs("ngon ngu lap trinh", ptr);	
	}
}


