#include<stdio.h> 
#include<math.h> 
int main(){ int t; scanf("%d",&t); long int n; while(t--){ scanf("%ld",&n); float N=sqrt(n); if(N==(int)N)printf("YES\n"); else printf("NO\n"); if(t==0)break; } }
