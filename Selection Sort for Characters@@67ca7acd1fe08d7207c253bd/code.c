void selectionSort(char arr[],int n){
    for(int i=0;i<n;i++){
        int minindex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }
        char temp=arr[minindex];
        arr[minindex]=arr[i];
        arr[i]=temp;
    }
}
printArray(char arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}