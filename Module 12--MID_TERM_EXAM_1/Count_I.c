#include <stdio.h>

int main()
{
    int n, even, odd, temp;
    scanf("%d", &n);

    odd = even = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &temp);
        if (temp % 2 == 0)
            even++;
        else odd++;
    }
    printf("%d %d\n", even, odd);

    return 0;
}