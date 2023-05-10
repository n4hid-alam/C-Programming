#include <stdio.h>

int n, m;
int a[205][205], b[205][205];

void print_sum (int i, int j)
{
    if (i == n) 
        return;

    printf("%d ", a[i][j] + b[i][j]);
    
    if (j+1 == m) printf("\n");
    if (j+1 < m)
        print_sum(i, ++j);
    else 
        print_sum(++i, 0);

}

int main()
{
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &a[i][j]);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &b[i][j]);
            
    print_sum (0, 0);

    return 0;
}