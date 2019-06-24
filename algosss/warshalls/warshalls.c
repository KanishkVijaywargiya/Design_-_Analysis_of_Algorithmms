/********************** || Warshals || ***************************/

#include<stdio.h>

int main(){
	int i, j, k, trans[10][10], adj[10][10], n;
	printf("\nEnter the no. of vertex:- ");
		scanf("%d", &n);
	printf("\nEnter the adj matrix:- \n");
	for(i = 1; i <= n; i++){
		for(j = 1; j <= n; j++){
			scanf("%d", &adj[i][j]);
			trans[i][j] = adj[i][j];
		}
	}
	for(k = 1; k <= n; k++){
		for(i = 1; i <= n; i++){
			for(j = 1; j <= n; j++){
				trans[i][j] = trans[i][j] || trans[i][k] && trans[k][j];
			}
		}
	}
	printf("\nThe trnsitive closure [%d] if k = 1 \n");
	for(i = 1; i <= n; i++){
		for(j = 1; j <= n; j++){
			printf("%d\t", trans[i][j]);
		}
		printf("\n");
	}
}
	
