#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node *pNext;//tro den phan tu ke tiep
};

struct SingleList{
	Node *pHead;//dslk don can co 1 con tro pHead de quan ly Node dau
};
void Init(SingleList &list){
	list.pHead = NULL;//khoi tao cho pHead tro toi NULL
}
Node* createNode(int d){
	Node *pNode = new Node;
	if(pNode != NULL){
		pNode->data = d;
		pNode->pNext = NULL;
	}
	else{
		cout<<"cap phat bo nho that bai";
	}
	return pNode;
}
void PrintfList(SingleList list){
	Node *pTmp = list.pHead;
	if(pTmp == NULL){
		cout<<"List rong tuech !!!";
	}
	else{
		while(pTmp != NULL){
			cout<<pTmp->data<<" ";
			pTmp = pTmp->pNext;
		}
	}
}
int sizeOfList(SingleList list){
	int size = 0;
	Node *pTmp = list.pHead;
	while(pTmp != NULL){
		size++;
		pTmp = pTmp->pNext;
	}
	return size;
}
void insert_first(SingleList &list, int d){
	Node *pNode = createNode(d);
	if(list.pHead == NULL){
		list.pHead = pNode;
	}
	else{
		pNode->pNext = list.pHead;
		list.pHead = pNode;//dich pHead tro ve dau
	}
}
void insert_last(SingleList &list, int d){
	Node *pNode = createNode(d);
	if(list.pHead == NULL){
		list.pHead = pNode;
	}
	else{
		Node *pTmp = list.pHead;//khoi tao 1 Node tam tro den dau list , roi dung node de duyet den cuoi list
		while(pTmp->pNext != NULL){
			pTmp = pTmp->pNext;
		}
		//sau while pTmp->pNext == NULL
		pTmp->pNext = pNode;
	}
}
void insert_Mid(SingleList &list, int d, int pos){
	if(pos == 0){
		insert_first(list, d);
	}
	else if(pos == sizeOfList(list)-1){
		insert_last(list, d);
	}
	else{
		Node *pNode = createNode(d);//tao moi
		Node *pIns = list.pHead;
		Node *pPre = NULL;
		int i = 0;
		while(pIns != NULL){
			if(i == pos)
				break;//vi tri muon chen
			pPre = pIns;
			pIns = pIns->pNext;
			i++;
		}
		pNode->pNext = pIns;
		pPre->pNext = pNode;
	}
}
void remove(SingleList &list, int d){
	Node *pDel = list.pHead;
	Node *pPre = NULL;//can 1 Node de luu 
	//duyet tim Node de xoa
	while(pDel != NULL){
		if(pDel->data == d)
			break;
		pPre = pDel;
		pDel = pDel->pNext;
	}
	if(pDel == NULL){
		cout<<"ko tim thay "<<d<<" de xoa\n";
	}
	else{
		//neu xoa nut dau
		if(pDel == list.pHead){
			list.pHead = list.pHead->pNext;
			pDel->pNext = NULL;
			delete pDel;
		}
		else{
			pPre->pNext = pDel->pNext;
			pDel->pNext = NULL;
			delete pDel;
		}
	}
}
Node *search_Node(SingleList list, int d){
	Node *pTmp = list.pHead;
	while(pTmp != NULL){
		if(pTmp->data == d)
			break;
		pTmp = pTmp->pNext;
	}
	return pTmp;
}

int main(){
	SingleList list;
	Init(list);
	insert_first(list,3);
	insert_first(list,5);
	insert_first(list,7);
	insert_last(list,9);
	//7 5 3 9
	insert_Mid(list, 11, 3);
	remove(list,99);
	remove(list,9);
	PrintfList(list);
	
	int d;
	cout<<"\nnhap gia tri muon tim : ";cin>>d;
	Node *x = search_Node(list,d);
	if(x != NULL)
		cout<<"thay "<<d;
	else
		cout<<"khong thay "<<d;
}


