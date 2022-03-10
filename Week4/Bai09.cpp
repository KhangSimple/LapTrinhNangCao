void sort(float array[], int size, bool isAscending){
    if(isAscending==true){
        for(int i=0;i<size-1;i++){
            for(int j=i+1;j<size;j++){
                if(array[i]>array[j]){
                    float tmp=array[i];
                    array[i]=array[j];
                    array[j]=tmp;
                }
            }
        }
    }
    else{
        for(int i=0;i<size-1;i++){
            for(int j=i+1;j<size;j++){
                if(array[i]<array[j]){
                    float tmp=array[i];
                    array[i]=array[j];
                    array[j]=tmp;
                }
            }
        }
    }
}
