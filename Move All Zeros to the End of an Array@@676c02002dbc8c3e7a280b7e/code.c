int end(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[i]==0){
                arr[j]=arr[j+1];
            }
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    end(arr,n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}