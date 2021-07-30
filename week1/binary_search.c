#include<stdio.h>
int main()
{
	int ti,i,noc,noe,list[100],req_ind[100],count[100],ele,beg,end,mid;
	scanf("%d",&noc);
	for(ti = 0;ti<noc;ti++)
	{
		scanf("%d",&noe);
		for(i = 0;i<noe;i++)
		{
			scanf("%d",&list[i]);
		}
		scanf("%d",&ele);
		count[ti] = 0;
		req_ind[ti] = -1;
		beg = 0;
		end = noe-1;
		while(beg<=end)
		{
			mid = (beg+end)/2;
			count[ti]++;
			if(list[mid]==ele&&((req_ind[ti] = mid)||(1)))
			break;
			else if(list[mid]>ele)
			end = mid - 1;
			else if(list[mid]<ele)
			beg = mid + 1;
		}
	}
	for(ti = 0;ti<noc;ti++)
	{
		if(req_ind[ti]+1&&printf("\nElement found %d",count[ti]));
		else printf("\nElement not found %d",count[ti]);
	}
}
