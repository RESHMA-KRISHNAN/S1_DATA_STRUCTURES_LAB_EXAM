#include<stdio.h>
int v, i, j, G[30][30],visited[20]; 
void DFS(int);
 
void main()
{
    
    printf("       IMPLEMENTATION OF DFS      ");
    printf("\nEnter number of vertices:");
    scanf("%d", &v);
   
	printf("\nEnter adjacency matrix of the graph:");
    for(i=0;i<v;i++){
       for(j=0;j<v;j++){
			scanf("%d",&G[i][j]);
       }
    }

   for(i=0;i<v;i++){
        visited[i]=0;
   }
    printf("\nDepth First Search for the given graph is:");
    DFS(0);
}
 
void DFS(int i)
{
	printf("\n%d",i);
    visited[i]=1;
	
	for(j=0;j<v;j++){
       if(!visited[j]&&G[i][j]==1)
            DFS(j);
    }
}