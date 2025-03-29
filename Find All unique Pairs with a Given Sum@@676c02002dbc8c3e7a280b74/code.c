#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int target;
    scanf("%d",&target);
    int printed =0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]=arr[j] && arr[i]+arr[j]==target){
                printf("%d %d",arr[i],arr[j]);
            }
             if(arr[j]+arr[i]==target){
                printf("%d %d\n",arr[i],arr[j]);
                printed=1;
                
            }
        }
    }
}