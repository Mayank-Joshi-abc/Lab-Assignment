#include<stdio.h>
#include<malloc.h>
#include<math.h>
int JS(int ar[], int n, int e,int * cnt)
{
	int prev,next;
	*cnt = 0;
	if(ar[0] == e)
	{
		*cnt = 0;
		return 0;
	}
	prev = 0;
	next = 1;
	while(true)
	{
		(*cnt)++;
		prev = next;
		next = next *2;
		if(next >= n)
		{
			next = n-1;
		}
		if(ar[next] == e)
			return next;
		if(e<ar[next])
		{
			break;
		}
	}
	for(int i = prev; i<=next;i++)
	{
		(*cnt)++;
		if(ar[i]>e)
			return -1;
		if(ar[i] == e )
			return i;
			
	}
	return -1;
}
int main()
{
	int noc,i,arr[1000],noe,j,ele;
	scanf("%d",&noc);
	int *vals = (int *)malloc(noc*sizeof(int));
	int *its = (int *)malloc(noc*sizeof(int));
	for(i =0;i<noc;i++)
	{
		scanf("%d",&noe);
		for(j = 0;j<noe;j++)
			scanf("%d",&arr[j]);
		scanf("%d",&ele);
		*(vals+i) = -1;
		*(vals+i) = JS(arr,noe,ele,its+i);
	}
	
	for(i =0;i<noc;i++)
	{
		if(i[vals] == -1)
			printf("\nNot present %d",*(its+i));
		else
			printf("\nPresent %d",*(its+i));
	}
	return 0;
}
	
