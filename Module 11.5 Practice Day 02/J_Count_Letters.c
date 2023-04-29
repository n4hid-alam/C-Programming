#include <stdio.h>
#include <string.h>

int main()
{
    int arr[26] = {0};
    char s;

    while (scanf("%c", &s) != EOF) {
        arr[s-'a']++;
    }
    for (int i = 0; i < 26; i++) {
        if (arr[i] != 0) {
            printf("%c : %d\n", i+'a', arr[i]);
        }
    }

    return 0;
}