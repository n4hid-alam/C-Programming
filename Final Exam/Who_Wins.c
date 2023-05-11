#include <stdio.h>

int main()
{
    int n, tiger_cnt, pathan_cnt;
    scanf("%d", &n);

    pathan_cnt = 0;
    tiger_cnt = 0;
    while (n--) {
        int tiger, pathan;
        scanf("%d %d", &tiger, &pathan);
        if (tiger > pathan) tiger_cnt++;
        else if (pathan > tiger) pathan_cnt++;
    }
    if (tiger_cnt > pathan_cnt) 
        printf("Tiger\n");
    else if (pathan_cnt > tiger_cnt) 
        printf("Pathan\n");
    else 
        printf("Draw\n");

    return 0;
}