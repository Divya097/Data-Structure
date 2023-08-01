#include<stdio.h>
int main(){
	int a[10],n,i,odd_count=0,even_count=0;
	printf("Enter the number in the array:");
	scanf("%d",&n);
	printf("Enter the array elemnts");
	
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]%2==0)
			even_count++;
		else
		    odd_count++;
	}
	printf("The number of even numbers is:%d",even_count);
	printf("The number of odd number is:%d",odd_count);
	return 0;
}