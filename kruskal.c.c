#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 30

int n,i,j,cost[MAX][MAX], ne=1, min, a,b,u,v, mincost=0, parent[MAX];


int find( int );
int uni(int, int);

void main(){

    printf("Enter the no.of vertices in the graph given:");
    scanf("%d",&n);

    printf("\nEnter the cost adjacency matrix:");

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            scanf("%d",&cost[i][j]);
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(cost[i][j] == 0){
                cost[i][j]=9999;
			}
			else{
				 cost[i][j] = cost[i][j];}
            }
        
    }
    
    printf("\nThe edges of the minimum cost spanning tree are:\n");

    while(ne < n)
	{
		for(i=1,min=9999;i<=n;i++)
		{
			for(j=1;j <= n;j++)
			{
				if(cost[i][j] < min)
				{
					min=cost[i][j];
					a=u=i;
					b=v=j;
				}
			}
		}
		u=find(u);
		v=find(v);
		if(uni(u,v))
		{
			printf("%d edge (%d,%d) =%d\n",ne++,a,b,min);
			mincost +=min;
		}
		cost[a][b]=cost[b][a]=9999;
	}

    printf("\n\tMinimum cost = %d\n",mincost);
	getch();
 }


int find(int i){

	while(parent[i])
	i=parent[i];
	return i;
}
int uni(int i,int j)
{
	if(i!=j)
	{
		parent[j]=i;
		return 1;
	}
	return 0;
}

