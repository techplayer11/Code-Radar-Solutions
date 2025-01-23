#include<stdio.h>
int main(){
    int a, b, c;
    printf("Enter values:");
    scanf("%d %d %d", &a, &b, &c);
    int sum=a+b+c;
    float average=sum/3;
    printf("output is:%f\n",average);
    return 0; 
}   