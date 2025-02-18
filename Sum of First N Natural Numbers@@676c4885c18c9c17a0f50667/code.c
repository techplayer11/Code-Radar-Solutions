#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum=0;
    for(int i;i<=n;i++){
        sum+=i;
    }
    printf("\n",sum);
    return 0;
}