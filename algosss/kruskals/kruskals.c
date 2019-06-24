/******************** || Kruskals || *************************/

#include<stdio.h>

int main(){
	int i, j, k, a, b, u, v, n, nE = 1, min, minCost = 0, cost[10][10], parent[10];
	printf("\nEnter the no of vertices:- ");
		scanf("%d", &n);
	printf("\nEnter the cost matrix:- \n");
	for(i = 1; i <= n; i++){
		for(j = 1; j <= n; j++){
			scanf("%d", &cost[i][j]);
			if(cost[i][j] == 0)
				cost[i][j] = 999;
		}
	}
	while(nE < n){
		min = 999;
		for(i = 1; i <= n; i++){
			for(j = 1; j <= n; j++){
				if(cost[i][j] < min){
					min = cost[i][j];
					a = u = i;
					b = v = j;
				}
			}
		}
		while(parent[u])
			u = parent[u];
		while(parent[v])
			v = parent[v];
		if(u != v){
			printf("\n%d Edges [%d, %d] is %d", nE++, a, b, min);
			minCost += min;
			parent[v] = u;
		}
		cost[a][b] = cost[b][a] = 999;
	}
	printf("\nThe minCost = %d", minCost);
	printf("\n");
}

