#include<stdio.h>
 #include <math.h>
  int main(){ float a,b,c,d,e,f; scanf("%f %f %f",&a,&b,&c); d=pow(b,2)-4*a*c; e=(-b-sqrt(d))/(2*a); f=(-b+sqrt(d))/(2*a); if(d<0){ printf("NO"); } if(e==f){ printf("%.2f",e); } else{ printf("%.2f %.2f",f,e); } return 0; }
