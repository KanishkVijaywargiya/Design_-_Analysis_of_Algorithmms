/********************** || KnapSack ||*************************/

#include<stdio.h>

int max(int a, int b){
	return(a > b)? a:b;
}
int knapSack(int n, int wt[], int val[], int m){
	int i, j;
	int k[n+1][m+1];
	
	for(i = 0; i <= n; i++){
		for(j = 0; j <= m; j++){
			if(i == 0 || j == 0)
				k[i][j] = 0;
			else if(wt[i-1] <= m)
				k[i][j] = max(val[i-1] + k[i-1][j-wt[i-1]], k[i-1][j]);
			else
				k[i][j] = k[i-1][j];
		}
	}
	return k[n][m];
}
int main(){
	int i, n, j, val[10], wt[10], m;
	printf("\nEnter the no of items:- ");
		scanf("%d", &n);
	printf("\nEnter the value and weight of items:- \n");
	for(i = 0; i < n; i++)
		scanf("%d%d",&val[i],&wt[i]);
  	printf("\nEnter the size of knapSack:- ");
		scanf("%d", &m);
	printf("%d",knapSack(n, wt, val, m));
	return 0;
}
