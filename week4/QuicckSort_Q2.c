#include<stdio.h>
#include<malloc.h>
int Qcon(int *arr,int F,int L,int *cmp,int *shft)
{
	int i,temp;
	int p = arr[L];
	int j = F-1;
	for(i = F;i<L;i++)
	{
		printf("\nif(%d<=%d):%s",arr[i],p,arr[i]<=p?"swapping":"loop");
		if(++(*cmp)&&arr[i]<=p)
		{
			printf("\nSwapping %d<-->%d\n",arr[i],arr[j+1]);
			system("pause");
			printf("\n");
			(*shft)++;
			j++;
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
	printf("\n%d\n",j);
	printf("\nSwapping after loop %d<-->%d\n",arr[L],arr[j+1]);
	system("pause");
	printf("\n");
	(*shft)++;
	temp = arr[L];
	arr[L] = arr[j+1];
	arr[j+1] = temp;
	return j+1;
}
void Qdivide(int *arr, int F, int L,int *cmps, int *shfts)
{
	int i;
	printf("\nInside Qdivide arr = %u\n",arr);
	printf("\nCalled Qdivide(arr,%d,%d)\n",F,L);
	for(i=F;i<=L;i++)
	{
		printf("%d ",arr[i]);
	}
	
	printf("\n");
	system("pause");
	printf("\nGOOD\n");
//	printf("\nif(%d<%d)(%s) : %s\n",F,L,F<L,F<L?"Continue":"Return");
//  OR
	printf("\nif(%d<%d) :? %s\n",F,L,F<L?"Continue":"Return");
	if(F<L)
	{
		printf("\ncalling Qcon(arr,%d,%d)\n",F,L);
		for(i=F;i<=L;i++)
		{
			printf("%d ",arr[i]);
		}
		printf("\n");
		system("pause");
		int ind = Qcon(arr,F,L,cmps,shfts);
		printf("\ncalling Qdivide(arr,0,9)\n");
		for(i=F;i<=L;i++)
		{
			printf("%d ",arr[i]);
		}
		printf("\n");
		system("pause");
		Qdivide(arr,F,ind-1,cmps,shfts);
		printf("\ncalling Qdivide(arr,0,9)\n");
		for(i=F;i<=L;i++)
		{
			printf("%d ",arr[i]);
		}
		printf("\n");
		system("pause");
		Qdivide(arr,ind+1,L,cmps,shfts);
	}
}
int main()
{
//	int arr[] = {10,9,8,7,6,5,4,3,2,1},i,*cmp,*shft;
	int **arr,noc,*noe,i,j,*cmp,*shft;
	scanf("%d",&noc);
	arr = (int **)malloc(noc*sizeof(int *));
	noe = (int *)malloc(noc*sizeof(int));
	cmp = (int *) malloc(noc*sizeof(int));
	shft = (int *) malloc(noc*sizeof(int));
	for(i=0;i<noc;i++)
	{
		scanf("%d",noe+i);
//		printf("\naddress *(noe+i) %d",*(noe+i));
//		printf("\n%u\n",arr+i);
		*(arr+i) = 
		for(j=0;j<*(noe+i);j++)
		{
			printf("\ni = %d , j = %d ",i,j);
			scanf("%d",*(arr+i)+j);
		}
		for(j=0;j<*(noe+i);j++)
		{
			printf("\ni = %d j = %d address =  [%u] value = %d\n",i,j,*(arr+i)+j,*(*(arr+i)+j));
		}
		printf("\nHere i = %d",i);
		
	}
	for(i=0;i<noc;i++)
	{
		printf("\nGOOD1\n");
		printf("\n%d\n",*(*(arr+i)+0));
		*(cmp+i) = *(shft+i) = 0;
		Qdivide(*(arr+i),0,*(noe+i)-1,cmp+i,shft+i);
	}
//	printf("\ncalling Qdivide(arr,0,9) for first time \n");
//	system("pause");
//	Qdivide(arr,0,10-1,cmp,shft);
//	printf("\n");
//	printf("\nNOE = %d",*(noe+0));
	for(i=0;i<noc;i++)
	{
		printf("\n");
		for(j=0;j<*(noe+i);j++)
		{
			printf("%d ",*((*arr+i)+j));
		}
		printf("\ncomparisons = %d",*(cmp+i));
		printf("\nswaps = %d",*(shft+i));
	}
	return 0;
}
