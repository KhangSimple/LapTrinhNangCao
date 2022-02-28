#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int danhdau=n+1;
    int count=0; //Dung dem de dung vong lap
    for(int i=1;i<=2*n+1;i++){
    	if(count==2*n+2) break;
    	int a=i;
    	if(i>n+1) a=2*n+2-i;
        for(int j=1;j<=n*2+1;j++){
            if((j>=danhdau-(a-1)&& j<=danhdau+(a-1))){
                cout<<"*"<<" ";
            }
            else cout<<"."<<" ";
        }
        count++;
        cout<<endl;
    }
    return 0;
}
