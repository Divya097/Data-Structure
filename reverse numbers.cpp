#include<stdio.h>
int main(){
	int i,n,a[10];
	printf("enter your number:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
	printf("%d",a[i]);
}
	for(i=(n-1);i>=0;i--){
		
		printf(" %d ",a[i]);
	}
	return 0;
}