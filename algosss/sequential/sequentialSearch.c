/****************** || SequentialSearch Algorithms || *********************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int a[10],i,n,search;
	printf("\nEnter the number of elements:- ");
		scanf("%d",&n);
	printf("The number of elements are :- %d\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\n Enter the elements to be search:- \n");
		scanf("%d",&search);
	for(i=0;i<n;i++){
		if(a[i]==search){
			printf("\nElements  %d is found at %d",a[i],i++);
			exit(0);
		}
	}
	printf("\nElements %d is not found\n",search);
}
