#include <stdio.h>
int main(){
    int amount;
    scanf("%d",&amount);
    int Transaction;
    scanf("%d",&Transaction );
    if(amount<Transaction){
        printf("Profit");
    }
    else{
        printf("Loss")
    }
    return 0;
}