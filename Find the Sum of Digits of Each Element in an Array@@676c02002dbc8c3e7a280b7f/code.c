#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++){
        while(arr[i]!=0){
            sum+=arr[i]%10;
            arr[i]/=10;
        }
    }
    printf("%d",sum);
    return 0;
}