#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	int a;
	scanf("%d\n",&a);
	char ten[50];
	while (a--){
	gets(ten);
	int count = 0;
	for (int i=0;i<50;i++){
		if(ten[i] == ' ' ) {
			count++;}
		} count++;
	   printf("%d\n",count);}   
}
