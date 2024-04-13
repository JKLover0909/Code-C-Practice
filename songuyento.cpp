#include <stdio.h>
#include <math.h> 

int SNT(long x) { 
if (x == 1) {
 return (0);
}
 else if (x == 2) { 
 return (1); 
 } 
 else { int a = sqrt(x);
  for (int i = 2; i <= a; i++) {
   if (x % i == 0) {
   return (0); 
   } }
   return (1);} }   
   
   
int main(){ 
	long n;
	 scanf("%ld", &n);
	for(int i=1;i<=n;i++){
	 if (SNT(i) != 0){ 
	 printf("%d\n", i);
	     }
    } 
	return 0;
}

