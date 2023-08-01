#include<stdio.h>
int main(){
	char name[50];
	int i,n;
	printf("Enter your name:");
	gets(name);
	for(i=(n-1);i>=0;i--){
		printf("%c",name[i]);
	}
	return 0;
}