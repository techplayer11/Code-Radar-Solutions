#include<stdio.h>
#include<limits.h>
    int main(){
        int n;
        printf("");
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        int max=INT_MIN;
        for(int i=0;i<n;i++){
            if(max<arr[i]){
                max=arr[i];
            }
        }
        int smax=INT_MIN;
        for(int i=0;i<n;i++){
            if(arr[i]>smax && arr[i]<max){
                smax=arr[i];
            }
        }
        if(smax==INT_MIN){
            printf(" %d");
        }
        else{
        printf("%d",smax);
        }
        return 0;
    }