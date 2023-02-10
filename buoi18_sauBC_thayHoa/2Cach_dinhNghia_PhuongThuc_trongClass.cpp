#include<iostream>
#include<String>
using namespace std;
//nhap xuat thong tin cua mot hoc sinh(ten, dia chi, diem toan, diem van
class hocSinh{
	private : //bao ve dc cac thanh phan class => Encapsulation
		string hoTen, diaChi;
		float diemToan, diemVan;
		
	public: 
		void Nhap(){//cach 1 dinh nghia ham tring class
			fflush(stdin);
			cout<<"nhap ten Hs : ";
			getline(cin, hoTen);
			
			fflush(stdin);
			cout<<"nhap dia chi Hs : ";
			getline(cin, diaChi);
			
			fflush(stdin);
			cout<<"nhap diem : ";
			cin>>diemToan>>diemVan;
		}
		void Xuat();//cách 2, dinh nghia phuong thuc o bên ngoai class
};

void hocSinh::Xuat(){//cach 2
	cout<<"\n Ho ten : "<< hoTen;
	cout<<"\n Ho ten : "<< diaChi;
	cout<<"\n diem toan , van : "<< diemToan<< " "<<diemVan;
	
}
int main(){
	hocSinh HS;
	HS.Nhap();
	HS.Xuat();
}
