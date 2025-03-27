void selectionSort(char arr[],int n){
    for(int i=0;i<n;i++){
        int minindex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j][0]<arr[minindex][0]){
                minindex=j;
            }
        }
        char temp=arr[minindex];
        arr[minindex]=arr[i];
        arr[i]=temp;
    }
}
void printArray(char arr[],int n){
    for(int i=0;i<n;i++){
        printf("%s\n",arr[i]);
    }
}