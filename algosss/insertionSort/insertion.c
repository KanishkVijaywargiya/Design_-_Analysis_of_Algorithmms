/******************* || InsertionSort || ********************/

#include<stdio.h>
#include<stdlib.h>

int insertionSort(int *a,int n){
	int i,j,temp;
	for(i=1;i<n;i++){
		temp=*(a+i);
		j=i-1;
		while(temp<*(a+j) && j>=0){
			*(a+(j+1)) = *(a+j);
			j--;
		}
		*(a+(j+1)) = temp;
	}
	return 0;
}
int main(){
	int *a,i,n;
	printf("\nEnter the no. of elements :- ");
		scanf("%d",&n);
	a = (int *) malloc (n*sizeof(int));
	printf("\nEnter the elements:- \n");
	for(i=0;i<n;i++)
		scanf("%d",(a+i));
	insertionSort(a,n);
	printf("\nSorted array:- \n");
	for(i=0;i<n;i++)
		printf("%d\t",*(a+i));
	return 0;
}
