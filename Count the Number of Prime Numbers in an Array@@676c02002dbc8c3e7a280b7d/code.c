#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    if(n==1 || n==2){
        return 0;
    }
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    int count;
    for(int i=3;i*i<n;i++){
        if(n%i==0){
            count++;
        }
        printf("%d",count);
        return 0;
    }
}