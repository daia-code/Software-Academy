#include <stdio.h>

int main() {
     int num;
    int count =0;
    printf("Enter nr:");
    scanf("%d",&num);
    do{

        count++;
        num/=10;


    } while (num!=0);
    printf("%d",count);
    return 0;
}
