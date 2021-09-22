#include<stdio.h>
void TRY(int *arr, int n)
{
	printf("\n");
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",*(arr+i));
	}
	return;
}
int main()
{
	int noc,j;
	scanf("%d",&noc);
	int **arr, *noe,i;
	arr = (int **)malloc(noc*sizeof(int *));
	noe = (int *)malloc(noc*sizeof(int *));
	for(i=0;i<noc;i++)
	{
		scanf("%d",noe+i);
		*(arr+i) = (int *)malloc(*(noe+i)*sizeof(int));
		for(j=0;j<*(noe+i);j++)
		{
			scanf("%d",*(arr+i)+j);
		}
	}
	for(i=0;i<noc;i++)
	{
		TRY(*(arr+i),*(noe+i));
	}
	return 0;
}
