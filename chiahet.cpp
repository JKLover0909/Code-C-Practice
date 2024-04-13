#include <stdio.h>
#include <math.h>
int giaiThua(int n)
{
    if (n == 1)
        return 1;
    return n * giaiThua(n - 1);
}
int main()
{
    int n;
    long long k, r;
    scanf("%d%d", &n, &k);
    r = pow(2, k);
    if((giaiThua(n)%r)==0){
    	printf ("YES");
	}
	else{
		printf ("NO");
	}
    return 0;
}
