#include<stdio.h>
#include<malloc.h>
int Qcon(int arr[],int F,int L)
{
	int i,temp;
	int p = arr[L];
	int j = F-1;
	for(i = F;i<L;i++)
	{
		if(arr[i]<=p)
		{
			j++;
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
		temp = arr[L];
		arr[L] = arr[j+1];
		arr[j+1] = temp;
	return j+1;
}
void Qdivide(int arr[], int F, int L)
{
	int i;
	printf("\nCalled Qdivide(arr,%d,%d)\n",F,L);
	for(i=F;i<=L;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	system("pause");
	printf("\nGOOD\n");
//	printf("\nif(%d<%d)(%s) : %s\n",F,L,F<L,F<L?"Continue":"Return");
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
		int ind = Qcon(arr,F,L);
		printf("\ncalling Qdivide(arr,0,9)\n");
		for(i=F;i<=L;i++)
		{
			printf("%d ",arr[i]);
		}
		printf("\n");
		system("pause");
		Qdivide(arr,F,ind-1);
		printf("\ncalling Qdivide(arr,0,9)\n");
		for(i=F;i<=L;i++)
		{
			printf("%d ",arr[i]);
		}
		printf("\n");
		system("pause");
		Qdivide(arr,ind+1,L);
	}
}
int main()
{
//	int arr[] = {10,9,8,7,6,5,4,3,2,1},i;
	int noc,**arr,*noe;
	scanf("%d",&noc);
	arr = (int **)malloc(noc*sizeof(int *));
	noe = (int *)malloc(noc*sizeof(int));
	for(i=0;i<noc;i++)
	{
		scanf("%d",noe+i);
		for(j=0;j<*(noe+i);j++)
		{
			
		}
	}
//	scanf("%d",&noe);
//	*(arr+0) = (int *)malloc(3 * sizeof(int));
//	scanf("%d",&noe);
//	*(arr+0) = (int *)malloc(3 * sizeof(int));
//	scanf("%d",&noe);
//	*(arr+0) = (int *)malloc(3 * sizeof(int));
//	printf("\n%u\n",arr+0);
//	printf("\n%u\n",arr+1);
//	printf("\n%u\n",arr+2);
//	printf("\n%u\n",*(arr+0)+0);
//	printf("\n%u\n",*(arr+0)+1);
//	printf("\n%u\n",*(arr+0)+2);
//	printf("\n%u\n",*(arr+1)+0);
//	printf("\n%u\n",*(arr+1)+1);
//	printf("\n%u\n",*(arr+1)+2);
//	printf("\n%u\n",*(arr+2)+0);
//	printf("\n%u\n",*(arr+2)+1);
//	printf("\n%u\n",*(arr+2)+2);
//	printf("\ncalling Qdivide(arr,0,9) for first time \n");
//	system("pause");
//	Qdivide(arr,0,10-1);
//	printf("\n");
//	for(i=0;i<10;i++)
//	{
//		printf("%d ",arr[i]);
//	}
	return 0;
}
