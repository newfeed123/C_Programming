#include<iostream>
using namespace std;

int main(){
	int a = 10;
	int *ptr;
	ptr = &a;
	cout<<"dia chi cua bien a = "<<ptr<<endl;
	cout<<"gia tri tai bien a = "<<*ptr<<endl;//*&a
	*ptr = 100;//thay doi gia tri bien a thong qua ptr;
	cout<<"gia tri tai bien a sau khi doi = "<<a<<endl;
	int b[10];
	cout<<&b<<" = "<<b<<" = "<<&b[0];//dia chi cua mang chinh la dia chi cua phan tu dau tien b[0]
	
	int *arr = new int[1000];//cap phat dong 1 mang co 1000 phan tu
	delete []a;
	
	int *c = (int*)malloc(n*sizeof(int));//n so luong phan tu can cap phat , (int*) la ep kieu sang poiter
	//malloc : memory allocation (cap phat bo nho ) , sizeof : kich thuoc kieu du lieu theo btye , co the viet n*4 , vi int la 4 byte
	
}
