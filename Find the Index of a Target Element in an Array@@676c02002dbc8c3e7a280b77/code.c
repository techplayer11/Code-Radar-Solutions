#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int found=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            printf("%d ",i);
        }
        else{
            printf("-1");
        }
    }
    return 0; 
}