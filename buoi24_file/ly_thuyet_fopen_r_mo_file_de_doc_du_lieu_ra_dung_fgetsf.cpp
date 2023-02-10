#include<bits/stdc++.h>
using namespace std;

int main(){
	FILE *ptr;//con tro file
	//mo 1 file len dung fopen()
	ptr = fopen("abc1.txt", "r");//mo file len de doc vao bien
	if(ptr == NULL){
		printf("ERROR !");//ko mo dc hoac duong dan file bi sai 
	}
	else{
		char x[100];
		fgets(x, 100, ptr);//doc du lieu ra va luu vao mang toi da 100 ky tu
		printf("%s", x);
	}
}


