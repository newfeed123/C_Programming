#include<iostream>
using namespace std;
int main(){
	int t; cin>>t;
	for(int k = 1; k <= t; k++){
		int n;
		cin>>n;
		int a[n], b[n];//b : luu vi tri ket thuc cua day con tang dan trong a[n]
		for(int i = 0; i < n; i++)
			cin>>a[i];
		int cnt = 0;//dem so luong day con
		int do_dai = 0;//do dai hien tai cua day con
		int do_dai_max = -1e9;// do dai max cua 1 day con co the tim dc
		for(int i = 0; i < n; i++){
			if(i == 0 || a[i] > a[i-1])
				do_dai++;
			else
				//ket thuc 1 day , t can reset bien do_dai = 1 , de bat dau dem lai tu dau
				do_dai = 1;
			if(do_dai > do_dai_max){
				do_dai_max = do_dai;//update do dai vi co 1 day con co do dai > do_dai_max cu
				b[0] = i;//luu vi tri cua phan tu cuoi cung trong day con tang dan
				cnt = 1; // neu lon hon do_dai_max tuc la hien tai chi co 1 day con 
			}
			else if(do_dai == do_dai_max){
				b[cnt] = i;
				cnt++;
			}	
		}
		cout<<"test "<<k<<endl;
		cout<<do_dai_max<<endl;
		for(int i = 0; i < cnt; i++){
			for(int j = b[i] - do_dai_max + 1; j <= b[i]; j++)
				cout<<a[j]<<" ";
			cout<<endl;
		}
	}
}
