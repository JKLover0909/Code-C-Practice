#include<stdio.h>
 int main ()
  {
   int a, b, c, d;
   scanf("%d",&a); 
   if (a<=1000)
      {
        b=a/365;
		c=(a-(b*365))/7;
		d=a-(b*365)-(c*7);
		printf("%d %d %d",b,c,d); 
	   }
	   return 0; 
	}  
