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
            if(arr[i]%2==0){
                found;
            }
            else{
                printf("-1");
            }
            }
            int max=-1;
        for(int i=0;i<n;i++){
            if(found){
                if(arr[i]>max){
                    max=arr[i];
                }
            }
        }
        printf("%d",max);
        return 0;
}