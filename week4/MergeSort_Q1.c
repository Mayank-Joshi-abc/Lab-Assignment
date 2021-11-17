#include<stdio.h>
#include<malloc.h>
int tempSIZE;
void mergeSort(int * arr,int i,int m,  int n,int *cmps,int *invs)
{
	int ti = i, j = m+1;
	int * ar = (int *)malloc((n-i+1)*sizeof(int));
	int l = 0;
	while(ti<=m&&j<=n)
	{
		(*(cmps))++;
		if(arr[ti]<arr[j])
		{
			ar[l] = arr[ti];
			l++;ti++;
		}
		else
		{
			(*(invs))++;
			ar[l] = arr[j];
			l++;j++;
		}
	}
	while(ti<=m)
	{
		(*(cmps))++;
		ar[l] = arr[ti];
		l++;ti++;
	}
	while(j<=n)
	{
		(*(cmps))++;
		(*(invs))++;
		ar[l] = arr[j];
		l++;j++;
	}
	int tk = 0;
	for(ti=i;tk<(n-i+1);ti++,tk++)
	{
		arr[ti] = ar[tk];
	}
}
void mergeDivide(int *arr, int F, int L,int *cmp,int *inv)
{
	if(F<L)
	{
		int mid = (F+L)/2; 
		mergeDivide(arr,F,mid,cmp,inv);
		mergeDivide(arr,mid+1,L,cmp,inv);
		mergeSort(arr,F,mid,L,cmp,inv);
	}
}
int main()
{
	int noc,i,**arr,*noe,*rep,j,*cmps,*invs;
	scanf("%d",&noc);
	arr = (int **)malloc(noc*sizeof(int *));
	rep = (int *)malloc(noc*sizeof(int));
	cmps = (int *)malloc(noc*sizeof(int));
	invs = (int *)malloc(noc*sizeof(int));
	noe = (int *)malloc(noc*sizeof(int));
	for(i = 0;i<noc;i++)
	{
		scanf("%d",noe+i);
		tempSIZE = *(noe+i);
		*(arr+i) = (int *)malloc((*(noe+i))*sizeof(int));
		for(j=0;j<*(noe+i);j++)
		{
			scanf("%d",*(arr+i)+j);
		}
		*(cmps+i) = 0;
		*(invs+i) = 0;
		mergeDivide(*(arr+i),0,*(noe+i)-1,cmps+i,invs+i);
	}
	for(i = 0;i<noc;i++)
	{
		printf("\n");
		for(j=0;j<*(noe+i);j++)
		{
			printf("%d ",*(*(arr+i)+j));
		}
		printf("\ncomparisons = %d",*(cmps+i));
		printf("\ninversions = %d",*(invs+i));
	}
	return 0;
}
/*
3
8
23 65 21 76 46 89 45 32
10
54 65 34 76 78 97 46 32 51 21
15
63 42 223 645 652 31 324 22 553 12 54 65 86 46 325
*/
