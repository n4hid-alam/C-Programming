#include <stdio.h>

int main()
{
    float x, p;
    scanf("%f %f", &x, &p);

    float res = (p / (100-x)) * 100;
    printf("%0.2f\n", res);

    return 0;
}