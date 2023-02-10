#include<bits/stdc++.h>
using namespace std;

int main(){
	FILE *ptr;
	ptr = fopen("hoten.txt", "r");
	char ten[99];
	//fgets() : doc den cuoi file se tra ve NULL
	while(fgets(ten,90,ptr) != NULL){
		printf("%s\n", ten);
	}
}


