// do..while loop
#include <stdio.h>

int main()
{
    int i;

    i = 1;
    do {
        printf("%d\n", i);
        i++;
    } 
    while (i <= 5);

    printf("\n");
    
    i = 100;
    do {
        printf("%d\n", i);
        i++;
    } 
    while (i <= 5);

    return 0;
}