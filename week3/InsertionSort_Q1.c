#include<stdio.h>
#include<malloc.h>
int main()
{
	int noc,i,*noe,j,**arr,*shft,*cmps,temp,k,l;
	scanf("%d",&noc);
	shft = (int*)malloc(noc*sizeof(int));
	cmps = (int*)malloc(noc*sizeof(int));
	noe = (int*)malloc(noc*sizeof(int));
	arr = (int**)malloc(noc*sizeof(int *));
	for(i=0;i<noc;i++)
	{
		scanf("%d",noe+i);
		*(arr+i) = (int*)malloc((*(noe+i))*sizeof(int));
		for(j=0;j<*(noe+i);j++)
		{
			scanf("%d",&arr[i][j]);
		}
		*(cmps+i) = 0;
		*(shft+i) = 0;
		for(j=1;j<*(noe+i);j++)
		{
			temp = arr[i][j];
			for(k = j-1;k>=0&&((++cmps[i])&&temp<arr[i][k]);k--)
			{
				(*(shft+i))++;
				arr[i][k+1] = arr[i][k];
			}
			arr[i][k+1] = temp;
		}
	}
	for(i=0;i<noc;i++)
	{
		printf("\n\n");
		for(j=0;j<*(noe+i);j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\ncomparisons = %d",*(cmps+i));
		printf("\nshifts = %d",*(shft+i));
	}
	free(arr);
	free(shft);
	free(cmps);
}
