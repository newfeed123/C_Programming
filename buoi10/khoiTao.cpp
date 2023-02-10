#include<stdio.h>

long long tong_mang(long long arr[], long long n){
	long long sum = 0;
	for(long long i = 0; i < n; i++){
		sum += arr[i];
	}
	return sum;
}
long long dem_chan(long long arr[], long long n){
	long long cnt = 0;
	for(long long i = 0; i < n; i++){
		if(arr[i] % 2 == 0)
			cnt++;
	}
	return cnt;
}
void truyen_tham_tri(long long n){ //truyen tham tri ( truen gia tri )
	++n;//tham so : lay gia tri cua doi so truyen vao
}

void thayDoi_Mang(long long a[], long long n){
	for(long long i = 0; i < n; i++)
		a[i] *= 2;
}
long long main(){
	long long a[10];//cap phát 10 o nho de luu 10 phan tu , ko khoi tao thi 10 phan tu se la gia tri ngau nhien;
	long long b[10] = {1,2,3,4,5,6,7,8,9,10};//khoi tao gia tri cho 10 o nho;
	long long c[10] = {1,2,3,4,5};//5 thang con lai se bang 0 het
	long long d[10] = {0};//phan tu dau bang 0 va cac thang dang sau cung bang 0
	prlong longf("%d", b[5]); 
	prlong longf("\n");
	long long n;
	scanf("%d", &n);
	long long arr[n];
	for(long long i = 0 ;i <= n-1; i++){
		scanf("%d", &arr[i]);
	}
	for(long long i = 0 ;i <= n-1; i++){
		prlong longf("%d ",arr[i]);
	}
	long long sum = tong_mang(arr,n);
	prlong longf("\n%d", sum);
	
	long long dem_so_chan = dem_chan(arr,n);
	prlong longf("\n%d", dem_so_chan);
	
	long long x = 100;
	truyen_tham_tri(x);//doi so truyen vao
	prlong longf("%d", x);
	
	prlong longf("\n");
	//doi so truyen vao la mang thi se thay doi , mang la dia chi => truyen tham chieu ( truyen dia chi )
	for(long long i = 0 ;i <= n-1; i++){
		prlong longf("%d ",arr[i]);
	}
}
