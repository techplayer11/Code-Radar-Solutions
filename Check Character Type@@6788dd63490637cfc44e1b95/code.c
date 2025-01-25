#include <stdio.h>
int main(){
    char chh;
    scanf("%c",&chh);
    if(chh=='a'||chh=='e'||chh=='i'||chh=='o'||chh=='u'||chh=='A'||chh=='I'||chh=='O'||chh=='E'||chh=='U'){
        printf("Vowel\n");
    }
    else if(chh>=0 && chh<=9){
        printf("Digit\n");
    }
    else{
        printf("Vowel\n");
    }
    return 0;
}