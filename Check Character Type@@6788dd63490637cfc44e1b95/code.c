#include <stdio.h>
int main(){
    char chh;
    scanf("%c",&chh);
    if(isdigit(chh)){
        printf("Digit\n");
    }
    else if(isalpha(chh)){
       ch=tolower(ch);
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