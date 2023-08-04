#include<stdio.h>
int main(){
	int n,key,i,a[100];
	printf("Enter a number:");
	scanf("%d",&n);
	printf("Enter the array elements:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the number to be searched:");
	scanf("%d",&key);
	
	for(i=0;i<n;i++){
		if(a[i]==key){
		
			printf("The element is found at %d",i+1);
			break;
		}
		if(i==n){
		
		printf("The element is not found");
		}
}
	return 0;
}