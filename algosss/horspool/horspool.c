/******************* || HorsPool || ********************/

#include<stdio.h>
#include<string.h>
# define MAX 500

int table[MAX];

void shiftTable(char pattern[]){
	int i,j,m;
	m = strlen(pattern);
	for(i = 0; i < MAX; i++)
		table[i] = m;
	for(j = 0; j < m-1; j++)
		table[pattern[j]] = m-1-j;
}

int HorsPool(char text[], char pattern[]){
	int i, j, k, m, n;
	n = strlen(text);
	m = strlen(pattern);
	printf("\nLength of text = %d", n);
	printf("\nLength of Pattern = %d", m);
	i = m-1;
	while(i < n-1){
		k = 0;
		while((k < m) && (pattern[m-1-k] == text[i-k]))
			k++;
		if(k == m)
			return(i-m+1);
		else
			i += table[text[i]];
	}
	return -1;
}

int main(){
	char text[100], pattern[100];
	int position;
	printf("\nEnter the text:- ");
	gets(text);
	printf("\nEnter the pattern:- ");
	gets(pattern);
	shiftTable(pattern);
	position = HorsPool(text, pattern);
	if(position < 0)
		printf("\nFound\n", position++);
	else
		printf("\nNot found");
} 
