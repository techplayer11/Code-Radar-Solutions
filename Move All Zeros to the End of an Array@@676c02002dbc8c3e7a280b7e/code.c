#include<stdio.h>
int main(){
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        }
        int temp,k=n-1,i,j;
        while(k>0){
            temp=arr[n-1];
            for(i=n-2;i>=0;i--){
                arr[i+1]=arr[i];
            }
            arr[0]=temp;
            k--;
        }
        for(j=0;j<n;j++){
            printf("%d ",arr[j]);
        }
}