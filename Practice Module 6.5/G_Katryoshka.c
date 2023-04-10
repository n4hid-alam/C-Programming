/*
    These Test Cases must check
    1 2 3 -> 1
    0 11 2 -> 0
    90 24 89 -> 57
    458 81 280 -> 269
    965119552 149375162 605459782 -> 557247357
    862 84 92 -> 92
    640888406240047987 374226571365332132 461101106400641213 -> 461101106400641213
*/

#include <stdio.h>

int main()
{
    long long int eye, mouth, body;
    scanf("%lld %lld %lld", &eye, &mouth, &body);

    long long int count = 0;

    if (body < eye && body < mouth) {
        count += body;
        eye -= body;
        mouth -= body;
        body = 0;
    }
    if (mouth < eye && mouth < body) {
        count += mouth;
        eye -= mouth;
        body -= mouth;
        mouth = 0;
    }
    if (eye < body && eye < mouth) {
        count += eye;
        body -= eye;
        mouth -= eye;
        eye = 0;
    }
    if (eye > body) {
        if ( (eye / 2) > body) count += body;
        else count += (eye/2);
    }
    else 
        count += (eye/2);

    printf("%lld\n", count);

    return 0;
}


