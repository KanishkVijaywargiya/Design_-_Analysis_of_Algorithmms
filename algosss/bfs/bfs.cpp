#include<stdio.h>

int i,j,queue[10],a[10][10],visited[10],n,sv,front,rear,u;

void bfs(int n,int a[10][10],int sv);

int main(){
	printf("enter the number of the vertex\n");
		scanf("%d",&n);
	printf("enter the adjacny matrix\n");
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++)
			scanf("%d",&a[i][j]);
	}
	for(i=1;i<=n;i++)
		visited[i]=0;
	printf("enter the source vertex\n");
		scanf("%d",&sv);
	bfs(n,a,sv);
	for(i=1;i<=n;i++){
		if(visited[i]!=1){
			printf("Graph is not connected\n");
			return 0;
		}
	}
	printf("Graph is connected\n");
	return 0;
}
void bfs(int n,int a[10][10],int sv){
	front=rear=1;
	visited[sv]=1;
	queue[rear]=sv;
	while(front<=rear){
		u=queue[front];
        for(i=1;i<=n;i++){
			if(a[u][i]==1 && visited[i]==0){
				visited[i]=1;
				queue[rear]=i;
				rear+=1;
			}
		}
		front+=1;
	}
}
