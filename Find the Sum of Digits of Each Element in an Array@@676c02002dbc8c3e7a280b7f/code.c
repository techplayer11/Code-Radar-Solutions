#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int sum[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int num=arr[i];
        sum[i]=0;
        while(num!=0){
            sum+=num%10;
            num/=10;
        }
    }
    printf("%d",sum);
    return 0;
}