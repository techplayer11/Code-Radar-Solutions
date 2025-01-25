#include <stdio.h>
int main(){
    char chh;
    scanf("%c",&chh);
    if(chh>=0 || chh<=0){
        printf("Digit\n");
    }
    else if(chh>='A'&& chh<='Z')||(chh>='a' && chh<='z'){
       if(chh=='a'||chh=='e'||chh=='i'||chh=='o'||chh=='u'||chh=='A'||chh=='I'||chh=='O'||chh=='E'||chh=='U'){
        printf("Vowel");
       }
       else{
        printf("Consonant");
       }
    }
    else{
        printf("Special Character");
    }
    return 0;
}