#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a%3==0 || a%5==0){
        printf("Divisible by Both");
    }
    else{
        printf("Not Divisible");
    }
    return 0;
}