#include<stdio.h>
void fibonacciSeries(int n){
    int t1=0,t2=1,nextTerm;
    for(int i=1;i<=n;i++){
        nextTerm=t1+t2;
        t1=t2;
        t2=nextTerm;
    }
    printf("\n");
}