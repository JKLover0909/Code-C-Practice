#include<stdio.h>
 int main (){ long int a, b; scanf("%ld%ld", &a, &b); if(a > 0 && b >= 0 && a < 1000000 && b < 1000000){ printf("%ld\n", a + b); printf("%ld\n", a - b ); printf("%ld\n", a * b ); printf("%ld\n", a / b ); printf("%ld\n", a % b ); printf("%0.2f", (float)a/b ); } return 0; }
