/*********************** || Prims || ************************/

#include<stdio.h>

int main(){
	int i, j, n, k, a, b, u, v, nE = 1, cost[10][10], minCost = 0, min, visited[10];
	printf("\nEnter the no. of vertices:- ");
		scanf("%d", &n);
	printf("\nEnter the cost mat:- \n");
	for(i = 1; i <= n; i++){
		for(j = 1; j <= n; j++){
			scanf("%d",&cost[i][j]);
			if(cost[i][j] == 0)
				cost[i][j] = 999;
		}
	}
	printf("\nEdge of spanning tree:- \n");
	visited[1] = 1;
	while(nE < n){
		min = 999;
		for(i = 1; i <= n; i++){
			for(j = 1; j <= n; j++){
				if(cost[i][j] < min){
					if(visited[i] == 0)
						continue;
					else{
						min = cost[i][j];
						a = u = i;
						b = v = j;
					}
				}
			}
		}
		if(visited[v] == 0){
			printf("\n%d Edges [%d,%d] is %d \n", nE++, a, b, min);
			minCost += min;
			visited[b] = 1;
		}
		cost[a][b] = cost[b][a] = 999;
	}
	printf("\nMinCost = %d \n", minCost);
}	
