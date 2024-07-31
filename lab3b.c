#include<stdio.h>

void warshal(int p[][10], int n){
int i,j,k;
for(k=1;k<=n;k++)
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
p[i][j]=p[i][j] || p[i][k] && p[k][j];
}

int main(){
int a[10][10],n,i,j;
printf("enter n value: \n");
scanf("%d",&n);
printf("enter the graph data: \n");
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
scanf("%d",&a[i][j]);
warshal(a,n);
printf("the shortest path matrix is:\n");
for(i=1;i<=n;i++){
for(j=1;j<=n;j++)
printf("%d",a[i][j]);
printf("\n");
}
return 0;
}
