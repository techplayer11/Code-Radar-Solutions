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
    else if((chh>='a' && chh<='z')||(chh>='A'&& chh>='Z')){
        printf("Consonant\n");
    }
    else{
        printf("Special Character\n");
    }
    return 0;
}