#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int lowerBround,upperBround;
    cin>>lowerBround>>upperBround;
    int canduoi=sqrt(lowerBround);
    if(canduoi*canduoi!=lowerBround) canduoi+=1; 
    int cantren=sqrt(upperBround);
    for(int i=canduoi;i<=cantren;i++){
        cout<<i*i<<" ";
    }
    return 0;
}
