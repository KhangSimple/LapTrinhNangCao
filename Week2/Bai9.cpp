#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int n;
    cin>>n;
    float a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int j=n-1;j>=0;j--){
        printf("%.2f ",a[j]);
    }
    return 0;
}
