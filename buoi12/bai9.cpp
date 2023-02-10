#include<iostream>
using namespace std;

int main(){
	int n; cin>>n;
	int a[n];
	for(int i = 0; i < n; i++)
		cin>>a[i];
	int do_dai = 1, do_dai_max = -1e9;
	for(int i = 1; i < n; i++){
		if(a[i] != a[i-1])
			do_dai++;
		else
			do_dai = 1;
		if(do_dai > do_dai_max)
			do_dai_max = do_dai;
	}
	cout<<do_dai_max;
}
