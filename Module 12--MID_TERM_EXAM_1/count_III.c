#include <stdio.h>

int main()
{
    char s;
    int arr[26] ={0};

    while (scanf("%c", &s) != EOF) {
        arr[s-'a']++;
    }

    for (int i = 0; i < 26; i++) 
        printf("%c - %d\n", i+'a', arr[i]);

    return 0;
}