#include<iostream>
#include<math.h>
using namespace std;

int nt(int);
int rev(int);
int tong(int, int);
//-------------//
int rev(int n){
	int res , save = n;
	while(n){
		res = res*10 + n%10;
		n /= 10;
	}
	if(res == save)
		return 1;
	else
		return 0;
}
int soChinhPhuog(int n){
	int can = sqrt(n);// sqrt() tra ve double : sqrt(4) = 2.00000
	if(can * can == n)
		return 1;
	else
		return 0;
}
//neu n la so chinh phuong thi 5*n*n + 4 hoac 5 * n *n - 4 la so chinh phuong
int fibo(int n){
	int tong1 = 5*n*n+4;
	int tong2 = 5*n*n-4;
	if(soChinhPhuog(tong1) || soChinhPhuog(tong2))
		return 1;
	return 0;
}
int fibo(long long n){
	long long f1 = 0, f2 = 1;
	if(n == 0|| n == 1)
		return 1;
	else{
		for(int i = 2; i <= 92; i++){
			long long fn = f1 + f2;
			if(fn == n)
				return 1;
			f1 = f2;//gan lai f1 = f2
			f2 = fn;//de tim fn moi
		}
	}
}
int tong_CS(int n){
	int sum = 0;
	while(n){
		sum += n%10;
		n /= 10;
	}
	return sum;
}
int ngTo(int n){
	if(n < 2)
		return 0;
	else{
		for(int i = 2; i <= sqrt(n); i++){
			if(n % i == 0)
				return 0;
		}
		return 1;
	}
}
void ngTo_trong_a_b(int a, int b){
	int max = 0, min = 0;
	if(a > b){
		max = a;
		min = b;
	}
	else{
		max = b;
		min = a;
	}
	for(int i = min; i <= max; i++){
		if(ngTo(i) && tong_CS(i) % 2 == 0)
			cout<<i<<"\t";
	}
}
void phanTich_Thua_So_Nto(int n){
	for(int i = 2; i <= sqrt(n); i++){
		while(n % i == 0){
			cout<<i<<" ";
			n /= i;//chia tiep
		}
	}
	if(n > 1)
		cout<<n;
}
void dem_soLuong_ThuaSo_NTo_KhacNhau(int n){
	int dem = 0;
	int save = 0;
	for(int i = 2; i <= sqrt(n); i++){
		while(n % i == 0){
			if(i != save)
				dem++;
			n /= i;//chia cho i den khi khog chia het thi thoi
			save = i;
		}
	}
	if(n > 1)
		dem++;
	cout<<dem;
}
int main(){
	int a, b; cin>>a>>b;
	ngTo_trong_a_b(a,b);
	//dem_soLuong_ThuaSo_NTo_KhacNhau(28);
}
