#include<stdio.h>
int main(){
	int a[10][10],b[10][10],c[10][10],i,j,l,m,n,k;
	printf("enter number of rows and column:");
	scanf("%d %d %d",&n,&m,&l);
	
	printf("For matrix A");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("For matrix B");
	for(j=0;j<l;j++){
		for(k=0;k<m;k++){
			scanf("%d",&b[j][k]);
		}
	}
	
	for(i=0;i<n;i++){
		for(k=0;k<l;k++){
			c[i][k]=0;
			for(j=0;j<m;j++){
				c[i][k]=c[i][k]+(a[i][j]*b[j][k]);
			}
		}
	}
	printf("The output matrix c:");
	for(i=0;i<n;i++){
		for(k=0;k<l;k++){
			printf("%d\t",c[i][k]);
		}
		printf("\n");
	}
	return 0;
}