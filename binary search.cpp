#include<stdio.h>
int main(){
	int n,i,key,f,l,a[100],m,pos;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("The elements present are:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the number to searched ");
	scanf("%d",&key);
	f=0;
	l=n-1;
	m=(f+l)/2;
	while(f<=l){
	
	if(a[m]<key)
		f=m+1;
	else if(a[m]==key){
		printf("the element is found at the location %d",m+1);
		break;
	}
	else
    	l=m-1;
    }
	if(f>1)
		printf("The element is not found");
	return 0;
}
	
	