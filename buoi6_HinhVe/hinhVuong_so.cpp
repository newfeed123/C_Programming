#include<iostream>
using namespace std;
int main(){
	int n;cin>>n;
	
	for(int i = 1; i <= n; i++){ 
		int save = i;
		for(int j = 1; j <= n; j++){
			//int save = i;
			if(j < i){
				cout<<save<<" ";
				save--;
			}
			else{
				cout<<save<<" ";
				save++;
			}
		}
		cout<<endl;
	}
}
