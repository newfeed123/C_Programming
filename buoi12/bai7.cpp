#include<iostream>
#include<math.h>
using namespace std;

int soDep(int n){
	//3 678876 6
	int end = n%10; 
	n /= 10;
	int cnt = 0, tmp = n;
	int thuan_ngich = 0;
	while(n >= 10){
		thuan_ngich = thuan_ngich*10 + n%10;
		n /= 10;
		cnt++;
	}
	if(end != n*2 && n != end*2)
		return 0;
	int temp = tmp % (int)pow(10,cnt);
	if(thuan_ngich == temp)
		return 1;
}
int main(){
	int n; cin>>n;
	if(soDep(n))
		cout<<"YES";
	else
		cout<<"NO";
}
