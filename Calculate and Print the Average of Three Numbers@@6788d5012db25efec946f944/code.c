#include<stdio.h>
int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int sum=a+b+c;
    float average=sum/3;
    printf("Average: %.2f\n",average);
    return 0; 
}   