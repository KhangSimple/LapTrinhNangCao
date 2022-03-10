void readArray(int array[], int n){
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
}
bool compareArray(int array1[], int array2[], int n){
    for(int j=0;j<n;j++){
        if(array1[j]!=array2[j]) return false;
    }
    return true;
}
