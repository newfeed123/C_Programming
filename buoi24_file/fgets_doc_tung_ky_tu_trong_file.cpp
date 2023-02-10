#include<bits/stdc++.h>
using namespace std;

int main(){
	FILE *ptr;
	ptr = fopen("hoten.txt", "r");
	char c;
	//fgets() : doc den cuoi file se tra ve NULL
	while((c = getc(ptr)) != EOF){
		printf("%c", c);
	}
}


