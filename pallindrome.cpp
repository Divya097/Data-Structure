#include<stdio.h>
int main(){
	int n,i,a[10],flag,j;
	printf("enter a number:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("\ndisplay numbers:");
	for(i=0;i<n;i++){
		printf("\t%d",a[i]);
	}
	flag=1;
	for(i=0,j=(n-1);i<=n/2;i++,j--)
	{
		
		
		if(a[i]!=a[j]){
			flag=0;
			break;
		}
		else
		continue;
		
	}
	
	if(flag==1)
	printf("\nThe number is pallindrome");
	else
	printf("\nThe number is not pallindrome");
	return 0;
}