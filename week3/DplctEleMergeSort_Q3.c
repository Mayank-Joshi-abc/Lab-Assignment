#include<stdio.h>
#include<malloc.h>
void mergeSort(int arr[],int i,int m,  int n)
{
	int ti = i, j = m+1;
	int * ar = (int *)malloc((n-i+1)*sizeof(int));
	int l = 0;
	while(ti<=m&&j<=n)
	{
		if(arr[ti]<arr[j])
		{
			ar[l] = arr[ti];
			l++;ti++;
		}
		else
		{
			ar[l] = arr[j];
			l++;j++;
		}
	}
	while(ti<=m)
	{
		ar[l] = arr[ti];
		l++;ti++;
	}
	while(j<=n)
	{
		ar[l] = arr[j];
			l++;j++;
	}
	int tk = 0;
	for(ti=i;tk<(n-i+1);ti++,tk++)
	{
		arr[ti] = ar[tk];
	}
}
void mergeDivide(int arr[], int F, int L)
{
	if(F<L)
	{
		int mid = (F+L)/2; 
		mergeDivide(arr,F,mid);
		mergeDivide(arr,mid+1,L);
		mergeSort(arr,F,mid,L);
	}
}
int main()
{
	int noc,i,*arr,noe,*rep,j;
	scanf("%d",&noc);
	rep = (int *)malloc(noc*sizeof(int));
	for(i = 0;i<noc;i++)
	{
		scanf("%d",&noe);
		arr = (int *)malloc(noe*sizeof(int));
		for(j=0;j<noe;j++)
		{
			scanf("%d",arr+j);
		}
		mergeDivide(arr,0,noe-1);
		*(rep+i) = 0;
		for(j=0;j<noe-1;j++)
		{
			if(arr[j] == arr[j+1])
			{
				*(rep+i) = 1;
				break;
			}
		}
		free(arr);
	}
	for(i = 0;i<noc;i++)
	{
		if(*(rep+i) == 1)
			printf("\nYES");
		else
			printf("\nNO");
	}
	return 0;
}
