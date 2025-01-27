#include <stdio.h>
int main(){
    int amount;
    scanf("%d",&amount);
    int Transaction;
    scanf("%d",&Transaction );
    if(amount<Transaction){
        printf("Profit");
    }
    else if(amount>Transaction){
        printf("Loss");
    }
    else if(amount=Transaction){
        printf("No Loss");
    }
    return 0;
}