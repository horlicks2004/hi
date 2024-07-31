#include<stdio.h>
int max(int a, int b){
return (a>b)?a:b;
}

int knapsack(int W, int wt[], int val[], int n){
int i,w;
int k[n+1][W+1];
for(i=0;i<=n;i++){
for(w=0;w<=W;w++){
if(i==0 || w==0)
k[i][w]=0;
else if(wt[i-1]<=w)
k[i][w]=max(k[i-1][w], val[i-1]+k[i-1][w-wt[i-1]]);
else k[i][w]=k[i-1][w];
}
}
return k[n][W];
}
int main(){
int wt[100],val[100];
int W,n,i;

printf("enter no of items: ");
scanf("%d",&n);

printf("enter val and wt of %d items: \n",n);
for(i=0;i<n;i++){
printf("enter val and wt for item %d: ",i+1);
scanf("%d %d",&val[i], &wt[i]);
}
printf("enter capacity: ");
scanf("%d",&W);
printf("max val that can be obtained %d",knapsack(W,wt,val,n));
return 0;
}
