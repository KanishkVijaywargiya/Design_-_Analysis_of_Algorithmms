#include<stdio.h>

int main(){
	int count[50],a[50],n,i,j,b[50];
	printf("enter the number of array elements\n");
		scanf("%d",&n);
	printf("enter the array elements\n");
	for(i=1;i<=n;i++){
		count[i]=1;
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++){
		for(j=i+1;j<=n;j++){
			if(a[i]<a[j])
				count[j]++;
			else
				count[i]++;
		}
	}
	for(i=1;i<=n;i++)
		b[count[i]]=a[i];
	printf("sorted array is \n");
	for(i=1;i<=n;i++)
		printf("%d\t",b[i]);
	return 0;
}
