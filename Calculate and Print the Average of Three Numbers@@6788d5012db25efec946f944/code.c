#include<stdio.h>
int main(){
    int a, b, c;
    printf("Enter values:");
    scanf("%d %d %d", &a, &b, &c);
    int sum=a+b+c;
    int average=sum/3;
    printf("output is:%d\n",average);
    return 0; 
}   