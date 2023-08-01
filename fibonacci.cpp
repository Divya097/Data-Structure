#include<stdio.h>
int main(){
	int n1=0,n2=1,n3,i,n;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("The fibonacci series is:");
	printf("%d %d",n1,n2);
	for(i=0;i<n-2;i++){
		n3=n1+n2;
		printf(" %d ",n3);
	}
	return 0;
}