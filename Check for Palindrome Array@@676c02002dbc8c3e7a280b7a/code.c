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
            if(arr[i]==arr[n-i-1]){
                 found=1;
            }
            else{
                found=0;
            }
            if(found){
                printf("YES");
            }
            else{
                printf("NO");
            }
        return 0;
    }
}