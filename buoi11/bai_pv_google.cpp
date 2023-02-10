//next greater element 
// doi voi moi phan tu trong mang in ra phan tu dau tien ben phai lon hon no , neu ko co
//thi in ra -1
// 1 3 2 5 4 -> 3 -1 5 5 -1
//9 8 1 2 1 -> -1 -1 2 -1 -1

#include<iostream>
using namespace std;

int main(){
	int n; cin>>n;
	int a[n];
 
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}
	for(int i = 0; i < n-1; i++){
		int tmp = -1;
		for(int j = i+1; j < n; j++){
			if(a[j] > a[i]){
				tmp = a[j];
				break;
			}
		}
		cout<<tmp;	
	}
}
