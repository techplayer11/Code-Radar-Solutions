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
        int num=arr[i];
        int found=1;
        if(num<2){
            found=0;
        }
        else{
            for(int j=2;j*j<num;j++){
                if(num%j==0){
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