#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && b>c){
        printf("\n",a);
    }
    else if(b>a && a>c){
        printf("\n",b);
    }
    else{
        printf("\n",c);
    }
    return 0;
}