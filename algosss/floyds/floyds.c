/******************** || Floyds || ***********************/

#include<stdio.h>

int main(){
	int i, j, n, cost[10][10], d[10][10], k;
	printf("\nEnter the no. of vertices:- ");
		scanf("%d", &n);
	printf("\nEnter the distance matrix:- \n");
	for(i = 1; i <= n; i++){
		for(j = 1; j <= n; j++){
			scanf("%d", &cost[i][j]);
			if(cost[i][j] == 0)
				cost[i][j] = 999;
			d[i][j] = cost[i][j];
		}
	}
	for(k = 1; k <= n; k++){
		for(i = 1; i <= n; i++){
			for(j = 1; j <= n; j++){
				if(d[i][k] + d[k][j] < d[i][j])
					d[i][j] = d[i][k] + d[k][j];
			}
		}
	}
	printf("\nThe distance mat if k = 1 :- \n");
	for(i = 1; i <= n; i++){
		for(j = 1; j <= n; j++){
			printf("%d\t", d[i][j]);
		}
		printf("\n");
	}
}
