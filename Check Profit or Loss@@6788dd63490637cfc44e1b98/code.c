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
    else{
        printf("No Loss");
    }
    return 0;
}