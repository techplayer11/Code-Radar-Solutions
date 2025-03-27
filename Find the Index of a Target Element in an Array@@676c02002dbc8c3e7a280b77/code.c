#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int found;
    for(int i=0;i<n;i++){
        if(found=1){
            scanf("%d",&i);
        }
        else{
            printf("-1");
        }
    }
    return 0; 
}