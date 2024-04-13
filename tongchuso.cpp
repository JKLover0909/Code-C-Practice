#include <stdio.h> 
int main()
{
	int m,n,s;
	scanf("%d",&m);
	while (m--)
	{
	scanf("%d",&n);
	s=n%10;
	while (n>9){
	    n/=10;
	}
	if (s==n) printf ("YES\n"); else printf ("NO\n");;
}
}

