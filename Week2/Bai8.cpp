#include<iostream>
using namespace std;

int main(){
    long long int n;
    cin>>n;
    if(n<0) n=-n;
    int sochuso=0;
    do{
        n=n/10;
        sochuso++;
    }while(n!=0);
    cout<<sochuso;
    return 0;
}
