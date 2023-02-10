#include <iostream>
using namespace std;

int m, n;
int main(){
	cin>>m>>n;
	for(int i = 1; i <= m; i++){
		int save = i;
		for(int j = 1; j <= n; j++){
			if(i < n && j <= n-i+1){
				cout<<(char)(save + 64);
				save++;
			}
			else
				cout<<(char)(n-j+1 + 64);
		}
		cout<<endl;
	}
}

