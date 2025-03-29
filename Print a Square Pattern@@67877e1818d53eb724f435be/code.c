#include<stdio.h>
int main(){
    int n,m;
    printf("Enter no of rows(n):");
    scanf("%d",&n);
    printf("Enter no of stars in rows(m):");
    scanf("%d",&m);
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            printf("*");
        }
        printf("\n");
    }
}