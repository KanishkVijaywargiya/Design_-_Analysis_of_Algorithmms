#include<stdio.h>
#include<string.h>

void merge(int a[],int s,int e){
	int mid=(s+e)/2;
	int i=s,j=mid+1,k=s;
	int tmp[100];
	while(i<=mid&&j<=e){
		if(a[i]<=a[j])
			tmp[k++]=a[i++];
		else
			tmp[k++]=a[j++];
	}
	while(i<=mid)
		tmp[k++]=a[i++];
	while(j<=e)
		tmp[k++]=a[j++];
	for(i=s;i<=e;i++)
		a[i]=tmp[j];
}
void mergeSort(int a[],int s,int e){
	if(s>e)
		return;
	int mid=(s+e)/2;
	mergeSort(a,s,mid);
	mergeSort(a,mid+1,e);
	merge(a,s,e);
}
int main(){
	int a[100],i,n;
	printf("\nEnter the elements:- ");
		scanf("%d",&n);
	printf("\nEnter the elements which is to be sorted:- \n");
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	mergesort(a,0,n-1);
	printf("\nAfter merge sorting the elements are:- \n");
	for(i=1;i<=n;i++)
		printf("%d\t",a[i]);
}
	
