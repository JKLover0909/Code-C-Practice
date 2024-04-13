#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
	char c[1000];
	gets(c);
	char a[100][100]; int n = 0;
	char *token = strtok(c, " ");
	while (token != NULL){
		strcpy(a[n], token);
		n++;
		token = strtok(NULL, " ");	
	}
	for (int x=0;x<n;x++){
		for (int y=x+1;y<n;y++){
		if(strcmp((a[x]),a[y])==0){
			for (int z=y;z<n;z++){
			strcpy(a[z], a[z+1]);};
			n--;
		}
	} 
}   for(int i=0;i<n;i++){
printf("%s ",a[i]);}}
