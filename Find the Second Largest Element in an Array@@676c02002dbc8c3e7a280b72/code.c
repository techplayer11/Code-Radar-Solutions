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
            else{
                printf("-1");
            }
        }
        printf("%d",smax);
        return 0;
    }

