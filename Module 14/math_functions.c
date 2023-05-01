#include <stdio.h>
#include <math.h>

int main()
{
    printf("ceil (3.0001) : %0.2lf\n", ceil(3.0001));
    printf("floor (3.9999) : %0.2lf\n", floor(3.9999));
    printf("round (3.49) : %0.2lf\n", round(3.49));
    printf("round (3.51) : %0.2lf\n", round(3.51));
    printf("sqrt (49) : %0.2lf\n", sqrt(49));
    printf("power (2, 5) : %0.2lf\n", pow(2, 5));
    printf("(stdlib.h) absolute (-4): %d\n", abs(-4));
    
    return 0;
}