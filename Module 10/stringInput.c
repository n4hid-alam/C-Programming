#include <stdio.h>

int main()
{
    char str[6]; // need to initialize extra 1 size 
    
    // first way using loop
    for (int i = 0; i < 5; i++) { // i < 5 bcz null automatically putted
        scanf("%c", &str[i]); 
    }
    printf("%s\n", str);

    // second way : using scanf
    char str2[5];
    scanf("%s\n", str2);
    printf("%s\n", str2);
}