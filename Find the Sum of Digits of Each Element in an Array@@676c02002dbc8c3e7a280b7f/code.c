#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int sum[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int num=abs(arr[i]);
        sum[i]=0;
        while(num!=0){
            sum[i]+=num%10;
            num/=10;
        }
    }
    for(int i=0;i<n;i++){
       printf("%d ",sum[i]);
    }
    printf("\n");
    return 0;
}