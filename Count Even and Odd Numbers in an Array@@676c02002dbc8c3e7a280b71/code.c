#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    int evencount=0;
    int oddcount=0;
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(int i=0;i<n;i++){
        if(array[i]%2==0){
            evencount++;
        }
        else{
            oddcount++;
        }
    }
    printf("%d %d",evencount,oddcount);
    return 0;
}