#include<iostream>
#include<math.h>
using namespace std;
int uoc_Min(int n){
	int i = 2;
	while(true){
		if(n % i == 0)
			return i;
		i++;
	}
	
}
int main(){
	int t;
	int n, k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i = 1; i <= k; i++){
			n += uoc_Min(n);
		}
		cout<<n<<endl;
	}
}
