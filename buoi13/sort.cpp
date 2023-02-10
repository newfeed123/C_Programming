#include<iostream>
using namespace std;
void swap(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
void selection_sort(int a[], int n){
	//tim vi_tri_min : vi tri cua phan tu min trong mang
	for(int i = 0; i < n; i++){
		int vt_min = i;
		for(int j = i+1; j < n; j++){
			if(a[j] < a[vt_min])
				vt_min = j;//update vi tri min
		}
		//sau for tim dc vi tri cua phan tu min
		int tmp = a[i];//dung bien trung gian de luu gia tri trc khi doi
		a[i] = a[vt_min];
		a[vt_min] = tmp;
	}
}
void interchange_sort(int a[], int n){
	//sx doi cho truc tiep
	//doi cho ngay lap tuc khi gap nghich the
	for(int i = 0; i < n-1; i++){
		//doi voi moi phan tu o chi so i , neu phan tu dung sau no lon hon no thi doi cho ngay lap tuc
		for(int j = i+1; j < n; j++){
			if(a[i] > a[j]){
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
}
void bubble_sort(int a[], int n){
	//can n-1 buoc : moi buc se doi cho 2 vi tri lien ke nhau neu no nghich the
	//stable : neu co 2 gia tri cung nhau thi thu tu tuong doi ban dau van dc giu nguyen , 9 o vi tri 3 va 9 o vi tri 7 thi sau khi sx 9 o vi tri 3 van dung trc 9 o vi tri 7
	for(int i = 0; i < n-1; i++){
		for(int j = 0; j < n-i-1; j++){
			if(a[j] > a[j+1]){
				int tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}
		}
	}
}
void insertion_sort(int a[], int n){
	for(int i = 1; i < n; i++){
		int save = a[i];//lay 1 thang ra de xet xem no se dc chen vao dau
		int pos = i;
		//duyet nhung thang dung trc pos , thang nao lon hon thi doi cho , thang nao nho hon thi break
		while(pos > 0 && a[pos-1] > save){
			a[pos] = a[pos-1];
			pos--; //=> can pos > 0
		}
		a[pos] = save;//da tim dc pos de chen save
	}
}
void counting_arr_sort(int a[], int n){
	int max = a[0];
	for(int i = 0; i < n; i++){
		if(a[i] > max)
			max = a[i];
	}
	int cnt[max+1] = {0};
	for(int i = 0; i < n; i++){
		cnt[a[i]]++;
	}
	for(int i = 0; i <= max; i++){
		if(cnt[i]){
			for(int j = 0; j < cnt[i]; j++)
				cout<<i<<" ";
		}
	}
}
int main(){
//	int a, b;
//	cin>>a>>b;
//	swap(&a,&b);
//	cout<<a<<" "<<b;
	int n; cin>>n;
	int a[n];
	for(int i = 0; i < n; i++)
		cin>>a[i];
	selection_sort(a,n);
	cout<<"mang sau sx : ";
	for(int i = 0; i < n; i++)
		cout<<a[i]<<" ";
}
