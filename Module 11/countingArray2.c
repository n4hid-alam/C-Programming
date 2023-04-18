#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    scanf("%s", &s);
    // int count_str[123] = {0}; // usable for another way
    int count_str[26] = {0};

    // small letter
    for (int i = 0; i < strlen(s); i++) {
        count_str[s[i]-97]++;
    }

    for (int i = 0; i < strlen(s); i++)
        printf("%c - > %d\n", i+97, count_str[i]);


    // another way
    // for (int i = 0; i < strlen(s); i++) {
    //     count_str[s[i]]++;
    // }
    // for (int i = 0; i <=122; i++) {
    //     if (count_str[i] > 0) {
    //         printf("%c - %d\n", i, count_str[i]);
    //     }
    // }

    return 0;
}