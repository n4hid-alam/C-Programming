/*
...
...................................................................................
............................Relational Operators...................................
...................................................................................
.............. It verifies whether a condition is true of false....................
..... Less Than ( < ) --> checks whether a value is less than other one............
..... Less Than or Equal ( <= ) checks whether a value is less that or equal.......
..... Greater Than ( > ) Checks whether a value is greater than or not.............
..... Greater than or equal ( >= ) checks whether is greater than or equal.........
..... Equal ( == ) Checks whether two values are equal or not......................
..... Not equal ( != ) checks whether wheter two values are not equal or not.......
.....................................THE END.......................................
...................................................................................
...
*/

#include <stdio.h>

int main()
{
    int a = 50;

    // Less than ( < )
    if (a < 55) printf("a is less than 55\n");
    else printf("a is not less than 55\n");

    // Less than or Equal
    if (a <= 51) printf("a is less than 51 or equal to 51\n");
    else printf("a is neither less nor equal to 51\n");

    // Greater than ( > )
    if (a > 5) printf("a is greater than 5\n");
    else printf("a is not greater than 5\n");
    
    // Greater than or Equal
    if (a >= 50) printf("a is greater than or equal to 50\n");
    else printf("a is neither greater nor equal to 50\n");

    // Equla ( == ) NOTE: '=' this sign used to assign value
    if (a == 50) printf("a is equal to 50\n");
    else printf("a is not equal to 50\n");

    // Not Equal ( != )
    if (a != 100) printf("a is not equal to 100\n");
    else printf("a is equal to 100\n");

    return 0;

}