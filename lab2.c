#include<stdio.h>
int ne=1, min_cost=0;
void main(){
int i,j,a,u,b,v,n,min,cost[20][20],source,visited[20];
printf("enter the no of nodes: \n");
scanf("%d",&n);
printf("enter the cost matrix: \n");
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
scanf("%d",&cost[i][j]);

for(i=1;i<=n;i++)
visited[i]=0;
printf("enter the root node: \n");
scanf("%d",&source);
visited[source]=1;
printf("Minimum spanning tree is: \n");
while(ne<n){
min=999;
for(i=1;i<=n;i++){
for(j=1;j<=n;j++){
if(cost[i][j]<min)
if(visited[i]==0)
continue;
else{
min=cost[i][j];
a=i=i;
b=v=j;
}
}
}
if(visited[u]==0 || visited[v]==0){
printf("\nEdge %d\t(%d->%d) = %d\n",ne++,a,b,min);
min_cost+=min;
visited[b]=1;
}
cost[a][b]=cost[b][a]=999;
}
printf("Minimum cost is: %d\n", min_cost);
}
