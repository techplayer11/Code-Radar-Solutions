#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    int count;
    for(int i=0;i<n;i++){
        int n=arr[i];
        int found=1;
        if(n<2){
            found=0;
        }
        else{
            for(int i=2;i*i<n;i++){
                if(n%i==0){
                    found=0;
                    break;
                }
            }
        }
        if(found){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}