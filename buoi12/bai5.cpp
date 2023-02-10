#include<iostream>

using namespace std;

int main(){
	//tach cs ra luu vào mang
	// check cs trong luc tach
	int n; cin>>n;
	int cnt = 0, a[20], ok = 0;
	while(n){
		int r = n%10;
		if(r == 1){
			a[cnt] = 1;
			ok = 1;//
		}
		else if(r == 8 || r == 9 || r == 0){
			a[cnt] = 0;
		}
		else{
			ok = 0;
			break;
		}
		cnt++;
		n /= 10;
	}
	if(ok == 0){
		cout<<"INValid";
	}
	else{
		while(a[cnt - 1] == 0)
			--cnt;
		for(int i = cnt - 1; i >= 0; i--)
			cout<<a[i]<<" \n";
	}
}
