#include <bits/stdc++.h>
using namespace std;

#define ms(s,n) memset(s,n,sizeof(s))
#define all(a) a.begin(),a.end()
#define present(t, x) (t.find(x) != t.end())
#define sz(a) int((a).size())
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define FORd(i, a, b) for (int i = (a) - 1; i >= (b); --i)
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define mp make_pair

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+1;
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

char* convert(char d[]){
	char c[100];
	strcpy(c,d);
	int n = 0;
	char a[100][100];
	char *token = strtok(c," ");
	while(token!=NULL){
		strcpy(a[n++],token);
		token = strtok(NULL," ");
	}
	//nguyen van long=>longnguyenvan
	char res[100];
	char *kq = res;
	strcpy(res,a[n-1]);
	for(int i=0;i<n-1;i++){
		strcat(res,a[i]);
	}
	return kq;
}

int cmp(const void *a, const void *b){
	char *x = (char*)a;
	char *y = (char*)b;
	char *x1 = convert(x);
	char tmp[100];
	strcpy(tmp,x1);
	char *y1 = convert(y);
	char tmp1[100];
	strcpy(tmp1,y1);
	if(strcmp(tmp,tmp1)<0)
		return -1;
	return 1;
	//return strcmp(x1,y1)
}

int main(){
	int n;
	scanf("%d",&n);
	getchar();
	char c[100][100];
	for(int i=0;i<n;i++){
		gets(c[i]);
		//printf("%s\n",convert(c[i]));
	}
	//qsort(c,n,sizeof(c[0]),cmp);
	sx(c,n);
	for(int i=0;i<n;i++){
		printf("%s\n",c[i]);
	}
}
