#include<stdio.h>
#include<math.h>
#include<string.h>
struct pokemon{
	char ten[100];
	int evole;
	int da;
	int evoled;
};
typedef struct pokemon pika;
int main(){
	int t;
	scanf("%d",&t);
	pika a[t];
	for(int i=0;i<t;i++){
		a[i].evoled=0;
		getchar();
		gets(a[i].ten);
		scanf("%d %d",&a[i].evole,&a[i].da);
	}
	for(int i=0;i<t;i++){
		while(a[i].da/a[i].evole>=1){
			a[i].evoled++;
			a[i].da=a[i].da-a[i].evole+2;
		}
	}
	int sum=0,max=0;
	for(int i=0;i<t;i++){
		sum+=a[i].evoled;
		if(a[i].evoled>max) max=a[i].evoled;
	}
	printf("%d\n",sum);
	for(int i=0;i<t;i++){
		if(a[i].evoled==max){
			printf("%s",a[i].ten);
			break;
		}
	}
	return 0;
}
