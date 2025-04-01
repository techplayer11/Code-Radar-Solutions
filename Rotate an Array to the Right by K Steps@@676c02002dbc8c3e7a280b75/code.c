#include<stdio.h>
int main(){
        int n;
        scanf("%d",&n);
        int arr[n];
        int k;
        scanf("%d",&k);
        k=k%n;
        int reverse;
        reverse(arr,0,n-1);
        reverse(arr,0,k-1);
        reverse(arr,k,n-1);
        for(int i=0;i<=n;i++){
            printf("%d ",arr[i]);
        }
        return  0;
}