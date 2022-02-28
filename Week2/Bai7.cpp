#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	int x;
	cin>>x;
	double sum=1;
	double oldsum=0;
	double mu_x=1;
	double giaithua_x=1;
	double i=1;
	
	while(sum-oldsum>0.001){
		oldsum=sum;
		mu_x*=x;
		giaithua_x*=i;
		sum+=mu_x/giaithua_x;
		i++;
	}
	printf("%.4lf",sum);
	return 0;
}
