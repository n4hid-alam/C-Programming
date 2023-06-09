/*
...
..................................................................................
..................Type III Conditional Statement / Nester CS......................
..................................................................................
..............Structure:                                                     .....
.....                  if (condition_1) {                                    .....
.....                      if (condition_2) {                                .....
.....                          body;                                         .....
.....                      }                                                 .....
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
    int a = 50;
    int b = 30;

    if (a > 40) {
        if (b > 20) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    else {
        printf("a is less than 40\n");
    }

    return 0;
}