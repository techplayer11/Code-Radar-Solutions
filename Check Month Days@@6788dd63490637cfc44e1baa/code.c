#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==1){
        printf("31");
    }
    else if(b==2){
        printf("28");
    }
    else if(c==3){
        printf("30");
    }
    else{
        printf("Invalid month");
    }
    return 0;
}