#include <stdio.h>
#include <ctype.h>
int main() {
    // pr.1
    char check;

        printf("\nEnter a char:");
        scanf("%c",&check);

        if(isalpha(check)){ // (check >='a' && check<='z' ) || (check >='A' && check<='Z' )
            printf("\n %c is  alphabet",check);
        }
        else
        if(isdigit((int)(check))){ // check>=0 && check<=9
            printf("\n %c is a digit",(char)check);
        }
        else
        {
            printf("\n %c is  special character",check);
        }

    return 0;
}
