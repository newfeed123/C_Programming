#include<bits/stdc++.h>
using namespace std;

set<string> dic;//cac tu trong tu dien
int n, m, k;
char c[120][120];// ma tran ky tu
vector<string> res;//luu cac tu tim dc sau khi Try() trong mang c
bool used[120][120];

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1 , 1, -1, 0, 1};
void Try(int i, int j, string s){
	cout<<i<<" "<<j<<" "<<s<<endl;
	//quay lui tu vi tri i, j trong mang c 
	if(dic.find(s) != dic.end()){
		//o moi buoc quay lui , kiem tra tu qua lui dc co thuoc tu dien ko
		res.push_back(s);
	}
	//tu vi tri cij duyet qua 8 huong xung quanh
	for(int k = 0; k < 8; k++){
		int i1 = i + dx[k], j1 = j + dy[k]; //tu 1 o i j bat ky nhay sang 1 trong 8 o xung qunh
		if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= n && !used[i1][j1]){
			//vi tri i1, j1 van nam trong ma tran c va o day chua dc dung
			used[i1][j1] = true;//danh dau da dc dung
			Try(i1, j1, s + c[i1][j1]);
			used[i1][j1] = false;//back_track
		}
	}
		
}
int main(){
	int t; cin>>t;
	while(t--){
		cin>>k>>n>>m;
		//nhap tu dien
		for(int i = 0; i < k; i++){
			string x; cin>>x;
			dic.insert(x);
		}
		//nhap mang ky tu
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				cin>>c[i][j];
			}
		}
//		//quay lui tai tat ca cac vi tri trong mang c
//		for(int i = 1; i <= n; i++){
//			for(int j = 1; j <= m; j++){
//				//xet bat dau tu c11 trong mang
//				memset(used, false, sizeof(used));
//				used[i][j] = true;
//				string tmp = "";//+ cij de tao thanh 1 string
//				Try(i,j, tmp + c[i][j]);
//			}
//		}
//		for(string x : res)
//			cout<<x<<" ";
//		res.clear();
//		dic.clear();
	memset(used, false, sizeof(used));
	used[1][1] = true;
	string tmp = "";//+ cij de tao thanh 1 string
	Try(1,1, tmp + c[1][1]);
	}	
}


