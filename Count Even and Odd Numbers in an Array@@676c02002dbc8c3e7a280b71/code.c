#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int count=0;
    for(int i=0;i<=n-1;i++){
        if(arr[i]%2==0){
            count++;
        }
        else{
            count++;
        }
    }
    printf("%d ",count);
    return 0;
}