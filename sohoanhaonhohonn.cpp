#include<stdio.h>
 #include<math.h> 
 int check(long long n) { long long tong=1; for(int i=2;i<=sqrt(n);i++) { if(n%i==0) { if(i==n/i) { tong+=i; } else tong+=i+n/i; } } if(tong==n) return 1; else return 0; } main() { long long n; scanf("%lld", &n); for(long long i=6;i<=n;i++) { if(check(i)==1) printf("%lld ", i); } }
