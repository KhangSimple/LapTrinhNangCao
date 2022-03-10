void printArrow(int n, bool left){
    if(left==0){
        for(int i=1;i<=2*n-1;i++){
        	int copyi=i;
        	if(i>n) copyi=2*n-i;
            for(int j=0;j<2*copyi-2;j++){
                cout<<" ";
            }
            for(int k=0;k<n+1-copyi;k++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
    else{
    	for(int i=1;i<=2*n-1;i++){
        	int copyi=i;
        	if(i>=n) copyi=2*n-i;
            for(int j=0;j<n-copyi;j++){
                cout<<" ";
            }
            for(int k=0;k<n+1-copyi;k++){
                cout<<"*";
            }
            cout<<endl;
        }
	}
}
