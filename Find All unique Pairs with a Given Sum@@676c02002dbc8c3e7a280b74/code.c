#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int t;
    scanf("%d",&t);
    int totalpairs;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==t){
                totalpairs++;
            }
            printf("(%d %d)",arr[i],arr[j]);
        }
    }
    printf("%d",totalpairs);
    return 0;
}