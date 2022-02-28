#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int n;
    cin>>n;
    float a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int j=0;j<n;j++){
        cin>>b[j];
    }
    float tichvohuong=0;
    for(int k=0;k<n;k++){
        tichvohuong+=a[k]*b[k]*1.0;
    }
    printf("%.2f",tichvohuong);
    return 0;
}
