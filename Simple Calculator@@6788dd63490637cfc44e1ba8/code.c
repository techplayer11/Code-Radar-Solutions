#include<stdio.h>
int main(){
    int a,b;
    char c;
    scanf("%d %d",&a,&b);
    scanf("%c",&c);
    if(c=="+"){
        result=a+b;
        printf("%d\n",result);
    }
    else if(c=="-"){
        difference=a-b;
        printf("%d\n",difference);
    }
    else if(c=="*"){
        product=a*b;
        printf("%d\n",product);
    }
    else if(c=="/"){
        Division=a/b;
        printf("%d\n",Division);
    }
    else{
        printf("error");
    }
    return 0;
}