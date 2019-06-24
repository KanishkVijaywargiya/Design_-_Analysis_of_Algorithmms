/*******************************BINARY_SEARCH**********************************/

#include<stdio.h>
#include<string.h>
int main(){
	int i,a[100],n,search,first,last,mid;
	printf("\nEnter the number of elements:- ");
		scanf("%d",&n);
	printf("\nEnter the %d elements \n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter the elements to be search \n");
		scanf("%d",&search);
	first=0;
	mid=(first+last)/2;
	last=n-1;
	while(first<=last){
		if(a[mid]<search)
			first=mid+1;
		else if(a[mid]==search){
			printf("\n %d Found at position %d \n",search,mid+1);
			break;
		}
		else
			last=mid-1;
		mid=(first+last)/2;
	}
	if(first>last)
		printf("\n Not found! %d isn't present in the list \n",search);
	return 0;
}
