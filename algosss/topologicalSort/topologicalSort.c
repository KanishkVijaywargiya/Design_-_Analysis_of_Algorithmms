/***************** || TopologicalSort || ********************/

#include<stdio.h>

int main(){
	int i, j, n, adj[10][10], indeg[10], visited[10], count = 0, k;
	printf("\nEnter the no. of vertices:- ");
		scanf("%d",&n);
	
	printf("\nThe adjacency mat:- \n");
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++)
			scanf("%d",&adj[i][j]);
	}
	
	for(i = 0; i < n; i++){
		indeg[i] = 0;
		visited[i] = 0;
	}

	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++)
			indeg[i] = indeg[i] + adj[j][i];

	}
	printf("\nThe topological order is:-  ");
	
	while(count < n){
		for(k = 0; k < n; k++){
			if((indeg[k] == 0) && (visited[k] == 0)){
				printf("%d\t", k+1);
				visited[k] = 1;
			}
			for(i = 0; i < n; i++){
				if(adj[i][k] == 1)
					indeg[k]--;
			}
		}
		count++;
	}
	return 0;
}
