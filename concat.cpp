#include<stdio.h>
int main(){
	int a[5],b[5],c[20],i,n,m;
	printf("Enter n,m");
	scanf("%d %d",&n,&m);
	printf("Enter A");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter B");
	for(i=0;i<m;i++){
		scanf("%d",&b[i]);
	}
	for(i=0;i<n+m;i++){
		if(i<n){
			c[i]=a[i];
		}
		else
		c[i]=b[i-n];
	}
	for(i=0;i<(n+m);i++){
		printf("%d\t",c[i]);
	}
	return 0;
}