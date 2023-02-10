#include<bits/stdc++.h>
using namespace std;

struct node{
	int x; //data
	node *next;//con tro next tro toi node tiep theo trong dslk
};
//struct node_2{
//	char hoTen[20];
//	float diem;
//};
struct List{
	node *dau;
	node *cuoi;
};
void init(List &l){
	//khoi tao
	l.dau = l.cuoi = NULL;
}
//kiem tra ds co rong ko
int empty(List l){
	if(l.dau == NULL)
		return 1;
	return 0;
}

int size(List l){
	int cnt = 0;
	node *pTmp = l.dau;
	while(pTmp != NULL){
		++cnt;
		pTmp = pTmp.next;
	}
	return cnt;
}

//them 1 phan tu vao danh sach LK
void insert_first(List *l){
	//xin cap phat node moi
	node *ptr = (node*)malloc(sizeof(node));
	printf("nhap gia tri can them : ");
	scanf("%d", &ptr->x);
	ptr->next = NULL;
	
	if(l->dau == NULL){
		
	}
}
int main(){
}


