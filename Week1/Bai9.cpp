#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b>c &&b+c>a &&b+c>a){
        float p=(a+b+c)*1.0/2;
        float dienTichTamGiac=sqrt(p*(p-a)*(p-b)*(p-c));
        cout<<fixed<<setprecision(2)<<dienTichTamGiac;
    }
    else cout<<"invalid";
    return 0;
}
