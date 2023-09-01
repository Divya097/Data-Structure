3332#include<stdio.h>
#include<stdlib.h>
void dijkstras(int n,int cost[10][10],int s,int dist[10])
{
	int i,v,count=1,visited[10],min,j;
	for(i=1;i<=n;i++){
		visited[i]=0;
		dist[i]=cost[s][i];
	}
	visited[s]=1;
	dist[s]=0;
	while(count<=1){
		min=999;
		for(i=1;i<=n;i++)
		   if(dist[i]<min && visited[i]==0)
		     {
		     	min=dist[i];
		     	v=i;
			 }
	     visited[v]=1;
	     count++;
	     for(i=1;i<=n;i++)
	        if(dist[i]>dist[v]+cost[v][i])
	           dist[i]=dist[v]+cost[v][j];
	       }
	   }
	
	
int main(){
	int i,j,n,s,cost[10][10],dist[10];
	printf("Enter the no. of vertex:");
	scanf("%d",&n);
	printf("Enter the cost of matrix:");
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
		
	    scanf("%d",&cost[i][j]);
	    if(cost[i][j]==0)
	      cost[i][j]=999;
}
}
printf("Read source vertex");
scanf("%d",&s);
dijkstras(n,cost,s,dist);
printf("\n shortest path from source=%d\n",s);
for(i=1;i<n;i++){
	if(s!=i)
	    printf("\n%d->%d=%d",s,i,dist[i]);
}
return 0;
}
