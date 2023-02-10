#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(){
	char c[100];
	int n;
	scanf("%d", &n);
	getchar();//doc phim enter sau khi nhap n , xu ly troi lenh
	//scanf("%s", c);
	//gets(c);//stop khi gap enter hoac ket thuc file ( chuan C cu )
	
	fgets(c, 1000, stdin);//stdin : luong vao ; //fgets : doc ca phim enter
	
	c[strlen(c)-1] = '\0';//gan phim enter da doc thành ky tu null hoac so 0 hoac null
	printf("%d\n", n);
	printf("%s", c);
}
