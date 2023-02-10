#include<bits/stdc++.h>
using namespace std;

int main(){
	FILE *ptr;//con tro file
	//mo 1 file len dung fopen()
	ptr = fopen("abc.txt", "r");//mo file len de doc
	if(ptr == NULL){
		printf("ERROR !");//ko mo dc hoac duong dan file bi sai 
	}
	else{
		int x,y;
		fscanf(ptr,"%d%d", &x, &y);//nhap 2 so trong file abc.txt vao 2 bien x va y
		printf("%d %d", x, y);
	}
}


