#include<stdio.h>
int main(){
    int a,b;
    char c;
    scanf("%d %d",&a,&b);
    scanf("%c",&c);
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
        int Division=a/b;
        printf("%d\n",Division);
    }
    else{
        printf("error");
    }
    return 0;
}