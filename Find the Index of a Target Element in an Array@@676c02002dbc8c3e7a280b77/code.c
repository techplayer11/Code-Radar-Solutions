#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x;
    scanf("%d",&x);
    int all_equal=1;
    for(int i=0;i<n;i++){
        if(arr[i]!=x){
            all_equal=0;
            break;
        }
    }
    if(all_equal){
        printf("0");
        return 0;
    }
    int found=0;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            printf("%d ",i);
            found=1;
        }
    } 
        if(found==0){
            printf("-1");
    }
    return 0; 
}