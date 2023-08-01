#include<stdio.h>
int main(){
	int a[10],n,i;
	printf("Enter the number in the array:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("display numbers:");
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
	return 0;
}