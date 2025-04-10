#include<stdio.h>
    int main(){
        int n;
        printf("");
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        int max=-1;
        for(int i=0;i<n;i++){
            if(max<arr[i]){
                max=arr[i];
            }
        }
        int smax=-1;
        for(int i=0;i<n;i++){
            if(arr[i]>smax && arr[i]<max){
                smax=arr[i];
            }
            else if(arr[i]<0 && arr[i]<max){
                smax=arr[i];
            }
        }
        printf("%d",smax);
        return 0;
    }