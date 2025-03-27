#include<stdio.h>
int main(){
        int n;
        printf("Enter the size of array: ");
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        int x;
        printf("Enter x: ");
        scanf("%d",&x);
        int totalpairs=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;i<n;j++){
                if(arr[i]+arr[j]==x){
                    totalpairs++;
                    printf("(%d,%d)",arr[i],arr[j]);
                }
                
            }
        }
        printf("\n%d",totalpairs);
        return 0;
    }
