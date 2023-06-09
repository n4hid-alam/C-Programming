/*
...
..................................................................................
.........................Type II Conditional Statement.............................
..................................................................................
..............Structure:                                                     .....
.....                  if (condition_1) {                                    .....
.....                      body;                                             .....
.....                  }                                                     .....
.....                  else if (condition_2) {                               .....
.....                      body;                                             .....
.....                  }                                                     .....
.....                  else {                                                .....
.....                       body;                                            .....
.....                  }                                                     .....
..................................................................................
...................................THE END........................................
..................................................................................
...
*/

#include <stdio.h>

int main()
{
    int a = 7;

    if (a > 10) {
        printf("a is greater than 10\n");
    }
    else if (a > 8) {
        printf("a is greater than 8\n");
    }
    else {
        printf("a is less than 8 and 10\n");
    }

    return 0;
}