/********************************* || selectionSort Algorithms **********************************/

#include<stdio.h>
#include<string.h>
int main(){
	int i,j,n,swap,min,a[10];
	printf("\nEnter the no. of elements:- ");
		scanf("%d",&n);
	printf("\nThe no. of elements are %d \n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-1;i++){
		min=i;
		for(j=i+1;j<n;j++){
			if(a[j]<a[min])
				min=j;
			if(min!=i){
				swap=a[i];
				a[i]=a[min];
				a[min]=swap;
			}
		}
	}
	printf("\nSorted list in ascending order:- \n");
	for(i=0;i<n;i++)
		printf("\n%d\n",a[i]);
	return 0;
}
