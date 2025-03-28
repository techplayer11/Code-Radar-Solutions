#include<stdio.h>
void sumofdigits(int n,int arr[n],int result[]){
    for(int i=0;i<n;i++){
        int num=arr[i];
        int sum=0;
    if(num<0){
        num=-num;
    }
    while(num>0){
        sum+=num%10;
        num/=10;
    }
    result[i]=sum;
}
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int result[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sumofdigits(n,arr,result);
    for(int i=0;i<n;i++){
        printf("%d %d\n",arr[i],result[i]);
    }
    return 0;
}