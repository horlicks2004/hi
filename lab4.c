#include<stdio.h>
#include<stdlib.h>

void dijkstras(int n, int cost[20][20], int s, int dist[10]){
int i,j,v,min,count=1,visited[10];
for(i=1;i<=n;i++){
visited[i]=0;
dist[i]=cost[s][i];
}
visited[s]=1;
dist[s]=0;
while(count<=n){
min=999;
for(i=1;i<=n;i++)
if(dist[i]<min && visited[i]==0){
min=dist[i];
v=i;
}
visited[v]=i;
count++;
for(i=1;i<=n;i++)
if(dist[i]>dist[v]+cost[v][i])
dist[i]=dist[v]+cost[v][i];
}
}

int main()
{
int i,j,n,s,cost[20][20],dist[10];
printf("Enter the no. of nodes:");
scanf("%d",&n);
printf("Enter the cost matrix:\n");
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
scanf("%d",&cost[i][j]);
if(cost[i][j]==0)
cost[i][j]=999;
}
}
printf("Enter the source vertex:");
scanf("%d",&s);
dijkstras(n,cost,s,dist);
printf(" the shortest path from %d is\n" ,s);
for(i=1;i<=n;i++)
if(s!=i)
printf(" %d -> %d = %d\n",s,i,dist[i]);
return 0;
}
