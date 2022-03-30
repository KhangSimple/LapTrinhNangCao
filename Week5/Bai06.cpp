int* merge(int* firstArr, int lenArr1, int* secondArr, int lenArr2){
    int* addArr= new int[lenArr1+lenArr2];
    int count=0;
    for(int i=0;i<lenArr1;i++){
        addArr[count]=firstArr[i];
        count++;
    }
    for(int j=0;j<lenArr2;j++){
        addArr[count]=secondArr[j];
        count++;
    }
    if(firstArr[0]<firstArr[lenArr1-1]){
        for(int i=0;i<count-1;i++){
            for(int j=i+1;j<count;j++){
                if(addArr[i]>addArr[j]){
                    int tmp=addArr[i];
                    addArr[i]=addArr[j];
                    addArr[j]=tmp;
                }
            }
        }
    }
    else{
        for(int i=0;i<count-1;i++){
            for(int j=i+1;j<count;j++){
                if(addArr[i]<addArr[j]){
                    int tmp=addArr[i];
                    addArr[i]=addArr[j];
                    addArr[j]=tmp;
                }
            }
        }
    }
    return addArr;
}
