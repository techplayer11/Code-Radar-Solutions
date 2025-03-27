#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int found=0;
    printf("%d ");
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            printf("%d ",i);
            found=1;
        }
    } 
        if(found==0){
            printf("-1");
    }
    return 0; 
}