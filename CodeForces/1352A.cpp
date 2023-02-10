#include<iostream>
#include<math.h>
using namespace std;
int cs(int n){
	int dem = 1;
	while(n>10){
		dem++;
		n /= 10;
	}
	return dem;
}
int main(){
	int t,n;cin>>t;
	while(t--){
		cin>>n;
		int dem = 0;
		if(n < 10)
			cout<<++dem<<endl<<n<<endl;
		else{
			int a[100];
			while(n > 0){
				//cout<<n / pow(10,cs(n)-1)<<endl;
				a[dem] = (int)(n / pow(10,cs(n)-1)) * pow(10,cs(n)-1);
				n = n - a[dem];
				dem++;//den khi n = 1->9 thi van tang them 1 chi so nua 
				//cout<<" * "<<dem<<" * ";
			}
			cout<<dem<<endl;
			for(int i = 0; i < dem;i++)
				cout<<a[i]<<" ";
			cout<<endl;			
		}

	}
}
