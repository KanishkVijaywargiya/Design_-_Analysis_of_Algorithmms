#include<stdio.h>

void mergsort(int a[],int s,int e);
void merging(int a[],int s,int e);

int main(){
	int i,n,a[40];
	printf("enter the size of the array\n");
		scanf("%d",&n);
	printf("enter the array elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	mergsort(a,0,n-1);
	printf("the sorted array elements are\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	return 0;
}
void mergsort(int a[],int s,int e){
	int mid;
	if(s<e){
		mid=(s+e)/2;
		mergsort(a,s,mid);
		mergsort(a,mid+1,e);
		merging(a,s,e);
	}
}
void merging(int a[],int s,int e){
	int mid=(s+e)/2;
	int i=s,j=mid+1,k=0,temp[50];
	while(i<=mid&&j<=e){
		if(a[i]<a[j])
			temp[k++]=a[i++];
		else
			temp[k++]=a[j++];
	}
	while(i<=mid)
		temp[k++]=a[i++];
	while(j<=e)
		temp[k++]=a[j++];
	for(i=s,j=0;i<=e;i++,j++)
		a[i]=temp[j];
}
