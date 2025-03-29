#include<stdio.h>
int main(){
    int size,n,m;
    scanf("%d",&size);
    for(int i=0;i<n;i++){
        for(int j=i;j<m;j++){
            printf("*");
        }
        printf("\n");
    }
        return 0;
}