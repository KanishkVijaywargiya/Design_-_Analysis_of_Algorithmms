/******************** || N-Queen [ BackTrack ] || ************************/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int x[10],count,n;

int place (int r, int c){
	int i;
	for( i = 1; i <= r-1; i++){
		if(x[i] == c || abs(x[i]-c) == abs(i-r))
			return 0;
	}
	return 1;
}

void print(){
	int i;
	printf("\nSolution %d :- \n\n", ++count);
	for(i = 1; i <= n; i++)
		printf("%d\t", x[i]);
}

void queen(int k){
	int j;
	for(j = 1; j <= n; j++){
		if(place(k,j) == 1){
			x[k] = j;
			if(k == n)
				print();
			else
				queen(k+1);
		}
	}
}

int main(){
	printf("\nEnter the no. of queen:-");
		scanf("%d", &n);
	queen(1);
} 
