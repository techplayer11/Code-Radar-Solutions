#include<stdio.h>
int main(){
    int N,K;
    scanf("%d %d",&N,&K);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int count;
    for(int i=0;i<N;i++){
        if(arr[i]==K){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}