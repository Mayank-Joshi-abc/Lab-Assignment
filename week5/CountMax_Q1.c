#include<stdio.h>
#include<malloc.h>
void Counting_Sort(char *arr, int n)
{
	int COE[26]= {0},i,maxind = -1,maxno = 1;
	for(i=0;i<n;i++)
		COE[*(arr+i)-97]++;
	for(i=0;i<26;i++)
		if(COE[i]>maxno)
		{
			maxind = i;
			maxno = COE[i];
		}
	if(maxind == -1)
		printf("\nNo Duplicates Present");
	else
		printf("\n%c - %d",'a'+maxind,maxno);
		
}
int main()
{
	int noc,j,*noe,i;
	char **arr;
	scanf("%d",&noc);
	arr = (char **)malloc(noc*sizeof(char *));
	noe = (int *)malloc(noc*sizeof(int *));
	for(i=0;i<noc;i++)
	{
		scanf("%d",noe+i);
		*(arr+i) = (char *)malloc(*(noe+i)*sizeof(char));
		for(j=0;j<*(noe+i);j++)
		{
			getchar();
			scanf("%c",*(arr+i)+j);
			
		}
	}
	for(i=0;i<noc;i++)
		Counting_Sort(*(arr+i),*(noe+i));
	return 0;
}
