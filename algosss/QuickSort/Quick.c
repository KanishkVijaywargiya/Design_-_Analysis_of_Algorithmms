/*************************************** || QuickSort Algorithm || *****************************************/

#include<stdio.h>
int partition(int *a,int start,int end){
	int pivot=a[end];
	int partitionIndex=start;
	for(int i=start;i<end;i++){
		if(a[i]<pivot){
			swap(&a[i],&a[partitionIndex]);
			partitionIndex++;
		}
	}
	swap(&a[partitionIndex],&a[end]);
	return partitionIndex;
}
int swap(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void quickSort(int *a,int start,int end){
	if(start<end){
		int partitionIndex=partition(a,start,end);
		quickSort(a,start,partitionIndex-1);
		quickSort(a,partitionIndex+1,end);
	}
}
int main(){
	int i,n,a[10];
	printf("\nEnter the no. of element:- ");
		scanf("%d",&n);
	printf("The elements %d :- \n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	quickSort(a,0,n-1);
	printf("\nSorted sequence are :-");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
}
		

