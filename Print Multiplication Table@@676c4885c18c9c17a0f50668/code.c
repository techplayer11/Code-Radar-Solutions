#include <stdio.h>
int main(){
    int i;
    scanf("%d",&i);
    for(int n=1;n<=10;++n){
        printf("%d * %d= %d\n",n*i);
    }
    return 0;
}