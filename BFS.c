#include<stdio.h>
int v, i, j, visited[20], a[20][20], q[20], r = -1, f = 0;

void bfs(int w) {
    for(i = 1; i <= w; i++)
    if(a[w][i] && !visited[i])
    q[++r] = i;
    if(f <= r) {
    visited[q[f]] = 1;
   bfs(q[f++]);
  }
}

void main() {
    int start;
    printf("\n Enter the number of vertices:");
    scanf("%d", &v);
 
    for(i=1; i <= v; i++) {
        q[i] = 0;
        visited[i] = 0;
   }
 
    printf("\n Enter graph data in matrix form:\n");
    for(i=1; i<=v; i++) {
    for(j=1;j<=v;j++) {
    scanf("%d", &a[i][j]);
   }
 }
 
    printf("\n Enter the starting vertex:");
    scanf("%d", &start);
    bfs(start);
    printf("\n The node which are reachable are:\n");
 
    for(i=1; i <= v; i++) {
        if(visited[i])
        printf("%d\t", i);
        else {
            printf("\n Bfs is not possible. Not all nodes are reachable");
            break;
     }
  }
}