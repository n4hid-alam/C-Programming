#include <stdio.h>

int str_len (char *s)
{
    int count = 0;

    while (s[count] != '\0')
        count++;

    return count;
}

int  is_palindrome (char *s)
{
    int len = str_len (s);

    int start = 0;
    int end = len-1;
    while (start < end) {
        if (s[start] != s[end])
            return 0;
        start++;
        end--;
    }

    return 1;
}

int main()
{
    char s[11];
    scanf("%s", &s);

    int check = is_palindrome (s);
    if (check == 1) {
        printf("Palindrome\n");
    }
    else {
        printf("Not Palindrome\n");
    }

    return 0;
}