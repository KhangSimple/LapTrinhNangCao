#include<iostream>
using namespace std;

int main(){
    int total,totallegs;
    cin>>total>>totallegs;
    bool flag=false;
    if(totallegs%2!=0){
        cout<<"invalid";
        return 0;
    }
    int partlegs=totallegs/2;
    int dog=partlegs-total;
    int chicken=total-dog;
    if(chicken>=0 &&dog>=0) cout<<"chicken = "<<chicken<<", dog = "<<dog;
    else cout<<"invalid";
    return 0;
}
