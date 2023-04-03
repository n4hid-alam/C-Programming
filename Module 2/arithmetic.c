/*
...
..............................................................|
.............Arithmetic Operators.............................|
.... Plus operator ( + ) used to add values...................|
.... Minus operator ( - ) used to subtract valuues............|
.... Multiplying operator ( * ) used to multiply values ......|
.... Dividing operator ( / ) used to divide...................|
.... Mod operator ( % ) used to calculate remainder...........|
..............................................................|
...
*/

#include <stdio.h>

int main()
{
    int a, b;

    scanf ("%d %d", &a, &b);

    // Plus operator
    int sum = a + b;
    printf("%d + %d = %d\n", a, b, sum);

    // Minus operator
    int minus = a - b;
    printf("%d - %d = %d\n", a, b, minus);

    // Multiplying operator 
    int prod = a * b;
    printf("%d * %d = %d\n", a, b, prod);

    // Dividing operator
    int div = a / b;
    printf("%d / %d = %d\n", a, b, div); // this not gonna give right ans because 
                                        // integer type variable only can store integer
                                       // so div only store the integer part not fraction

    // To print fractions we need float type variable
    float div_f = a / b;
    printf("%d / %d = %f\n", a, b, div_f); // This also not gonna show right ans bcz,
                                    // An integer diving with another integer gives
                                   // integer value not fractions, so we need to convert
                                  //integer to float . let's see how can we do that

    // Converting integer to float type
    float div_F_R8 = a * 1.0 / b; // by multiplying with 1.0 (float type) the a's 
                                   // value converted to float type. now one value is 
                                  // float type
    printf("%d / %d = %f\n", a, b, div_F_R8); // shows right ans

    // Mod operator
    int mod = a % b;
    printf("%d Mod %d = %d\n", a, b, mod);

    return 0;
}