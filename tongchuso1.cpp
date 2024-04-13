#include <stdio.h> 
int main()
{
	int m,n;
	scanf("%d",&m);
	while (m--)
	{
	scanf("%d",&n);
	int s = 0;
	while (n>0){
		s+=n%10;
	    n/=10;
	}
	printf("%d\n",s);
}
}

