#include <stdio.h>

int main() {
    int mounth;
    printf("\nEnter the number of mounth:");
    scanf("%d", &mounth);
    switch (mounth) {
        case 1: {
            printf("\nJanuary have 31 days");
            break;
        }
        case 2: {
            printf("\nFebruary have 29 days");
            break;
        }
        case 3: {
            printf("\nMarch have 31 days");
            break;
        }
        case 4: {
            printf("\nApril have 30 days");
            break;
        }
        case 5: {
            printf("\nMay have 31 days");
            break;
        }
        case 6: {
            printf("\nJune have 30 days");
            break;
        }
        case 7: {
            printf("\nJuly have 31 days");
            break;
        }
        case 8: {
            printf("\nAugust have 31 days");
            break;
        }
        case 9: {
            printf("\nSeptember have 30 days");
            break;
        }
        case 10: {
            printf("\nOctober have 31 days");
            break;
        }
        case 11: {
            printf("\nNovember have 30 days");
            break;
        }
        case 12: {
            printf("\nDecember have 31 days");
            break;
        }
        default: {
            printf("\nWe have just 12 mounths!");

        }
    }

    return 0;
}
