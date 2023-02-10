#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main(){
    int a, b, c;
    cin>>a>>b>>c;
    if(a == 0){
        if(b == 0 && c != 0)
            cout<<"NO";
        else if(b == 0 && c == 0)
            cout<<"INF";
        else
            cout<<setprecision(2)<<fixed<<(float)-c/b; 
    }
    else{
        float delta = b*b-4*a*c;
        if(delta == 0)
            cout<<setprecision(2)<<fixed<<(float)-b/(2*a); 
        else if(delta < 0)
            cout<<"NO";
        else{
            float x1 = (-b-sqrt(delta))/(2*a);
			float x2 = (-b+sqrt(delta))/(2*a);
			if(x1>x2){
				cout<<setprecision(2)<<fixed<<x2<<" "<<x1;
			}else{
				cout<<setprecision(2)<<fixed<<x1<<" "<<x2;
			}
        }
    }
}
