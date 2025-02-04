#include<stdio.h>
int main(){
    int a,b;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    if(c=="+"){
        int result=a+b;
        printf("%d\n",result);
    }
    else if(c=="-"){
        int difference=a-b;
        printf("%d\n",difference);
    }
    else if(c=="*"){
        int product=a*b;
        printf("%d\n",product);
    }
    else if(c=="/"){
        if (b!=0){
        int Division=a/b;
        printf("%d\n",Division);
    }
        else{
            printf("Division by zero");
        }
    }
    else{
        printf("error");
    }
    return 0;
}