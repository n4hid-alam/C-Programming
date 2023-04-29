#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int count[100001] = {0};
    int num;
    while (scanf("%d", &num) != EOF) {
        count[num]++;
    }

    for (int i = 1; i <= m; i++) {
        printf("%d\n", count[i]);
    }
}