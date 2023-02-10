#include<iostream>
using namespace std;
int main(){
	int n;cin>>n;
	int m;cin>>m;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m+i-1;j++){
				if(	 i == 1 || 
					(i == n && j >= i) || 
					((i != 1 && j == i) || (i != n && j == m+i-1))){
					cout<<"* ";
					//hang 1 se in ra het *
					//hang giua chi in nhung vi tri j = i || j = cuoi
					//hang cuoi (i==n) chi in nhung vi tri j >= i
				}
				else{//nhung vi tri con lai
					if(i != 1 && i != n){
					//hang o giua
						if(j < i)
							cout<<"~ ";
						else
							cout<<". ";
					}
					if(i == n && j < i)
						//hang cuoi
						cout<<"~ ";						
				}
		}
		cout<<endl;
	}
}
