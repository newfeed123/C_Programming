#include<iostream>
using namespace std;
int main(){
	int n;cin>>n;
	for(int i = 1; i <= n; i++){
		int max_le = i*(i+1)/2-(i-1);
		int max_chan = i*(i+1)/2;//dua tren cong thuc tong tu 1 -> n
		for(int j = 1; j <= i; j++){
			if(i % 2 == 1){
				cout<<max_le<<" ";
				max_le++;
			}
			else{
				cout<<max_chan<<" ";
				max_chan--;
			}		
		}
		cout<<endl;
	}
}
