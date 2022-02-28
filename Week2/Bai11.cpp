#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int n;
    cin>>n;
    double a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    double sumArray=0; //Tinh tong cac phan tu cua mang
    for(int j=0;j<n;j++){
        sumArray+=a[j];
    }
    double mean=sumArray*1.0/n;
    double phuongsai=0;
    for(int k=0;k<n;k++){
        phuongsai+=(a[k]-mean)*(a[k]-mean)*1.0/n;
    }
    printf("%.2lf",phuongsai);
    return 0;
}
