#include<iostream>
using namespace std;

int main(){
	//2 thang choi xuxc sac n lan , so sanh so lan thang cua 2 thang de => KQ ai thang
	int n;cin>>n;
	int dem_1 = 0, dem_2 = 0;
	int mi, ci;
	while(n > 0){
		cin>>mi>>ci;
		if(mi > ci)
			dem_1++;
		else if(mi < ci)
			dem_2++;
		n--;
	}
	if(dem_1 > dem_2)
		cout<<"Mishka";
	else if(dem_1 < dem_2)
		cout<<"Chris";
	else
		cout<<"Friendship is magic! ^^";
}
