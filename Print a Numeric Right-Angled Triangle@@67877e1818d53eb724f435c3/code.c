#include<stdio.h>
int main(){
    int n; 
    scanf("%d",&n);
    int count=1;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=i;j++){
            printf("%d ",count++);
        }
        printf("\n");
    }
}