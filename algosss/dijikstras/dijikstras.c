/*************************** || Dijikstras || ***********************/

#include<stdio.h>

int main(){
	int i, j, k, n, cost[10][10], visited[10], dist[10], u, v, min, s;
	printf("\nEnter the no. of vertices:- ");
		scanf("%d", &n);
	printf("\nEnter the cost mat:- \n");
	for(i = 1; i <= n; i++){
		for(j = 1; j <= n; j++){
			scanf("%d", &cost[i][j]);
			if(cost[i][j] == 0)
				cost[i][j] = 999;
		}
	}
	printf("\nEnter the sourece vertex:- ");
		scanf("%d", &s);
	for(i = 1; i <= n; i++){
		visited[i] = 0;
		dist[i] = cost[s][i];
	}
	visited[s] = 1;
	dist[s] = 0;
	for(i = 1; i <= n-1; i++){
		min = 999;
		for(k = 1; k <= n; k++){
			if(dist[k] < min && visited[k] == 0){
				u = k;
				min = dist[k];
			}
		}
		visited[u] = 1;
		for(v = 1; v <= n; v++){
			if(visited[v] == 0){
				if(dist[u] + cost[u][v] < dist[v])
					dist[v] = dist[u] + cost[u][v];
			}
		}
	}
	printf("\nThe shortest path is :- \n");
	for(i = 1; i <= n; i++)
		printf("dist[%d]-->dist[%d] = %d \n", s,i,dist[i]);
}
