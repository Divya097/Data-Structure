#include<stdio.h>
int main(){
	int a[10],n,i;
	printf("Enter the number in the array:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]%2==0)
			printf("The number %d is even\n",a[i]);
		else
		    printf("The number %d is odd\n",a[i]);
	}
	return 0;
}