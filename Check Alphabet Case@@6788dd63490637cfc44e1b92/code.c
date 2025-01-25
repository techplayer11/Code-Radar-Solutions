#include <stdio.h>
int main(){
    char chh;
    scanf("%c",&chh);
    if(chh>='A' && chh<='Z'){
        printf("Uppercase");
    }
    else if(chh>='a'&& chh<='z'){
        printf("Lowecase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}