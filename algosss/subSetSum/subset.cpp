#include<stdio.h>
#include<math.h>

void findsubset(int);
void createbinary(int);

int set[25],n,k=0,binary[25];

int main(){
  int i,j,d;
  printf("Enter the number of subsets\n");
    scanf("%d",&n);
  printf("Enter the elements in the set\n");
  for(i=0;i<n;i++)
    scanf("%d",&set[i]);
  printf("Enter the required sum\n");
    scanf("%d",&d);
  findsubset(d);
  if(k==0)
    printf("No subsets exist\n");  
}
void findsubset(int d){
  int i,j,sum=0;
  for(i=0;i<pow(2,n);i++){
    createbinary(i);
    for(j=0;j<n;j++){
      if(binary[j]==1)
      sum=sum+set[j];
    }
    if(sum==d){	
      k++;
     	printf("Subsets %d:-->  ",k);
      for(j=0;j<n;j++){
        if(binary[j])
         	printf("%d\t",set[j]);
      }
      printf("\n");
    }
    sum=0;
  }
}
void createbinary(int x){
  int i;
  i=n-1;
  while(x){
    binary[i]=x%2;
    x=x/2;
    i--;
  }
  while(i>=0)
    binary[i--]=0;
}
