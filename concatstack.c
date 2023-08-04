#include<stdio.h>
#include<stdlib.h>
#define size 5
int top=-1,stk[size];

int main()
{
int n=4,m=5,stk1[4],stk2[5],stk3[80],i;
printf("Enter the elements in stack 1:");
for(i=0;i<n;i++){
	scanf("%d",&stk1[i]);
}

printf("Enter the elements in stack 2:");
for(i=0;i<m;i++){
	scanf("%d",&stk2[i]);
}


for(i=0;i<n+m;i++){
	if(i<n)
       stk3[i]=stk1[i];
    else
       stk3[i]=stk2[i-n];
}


printf("The elements in stack 3 are:");
for(i=m+n-1;i>=0;i--)
{
	printf("%d\n",stk3[i]);
}
return 0;
}
