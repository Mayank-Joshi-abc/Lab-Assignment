#include<stdio.h>
int main()
{
    int n,i,j,size,arr[100],ele,cmp[100],flag[100]={0};
    scanf("%d",&n);
    for(i = 0;i<n;i++)
    {
        scanf("%d",&size);
        for(j = 0;j<size;j++)
        {
            scanf("%d",&arr[j]);
        }
        scanf("%d",&ele);
        for(j = 0;j<size;j++)
        {
            if(ele == arr[j])
            {
                flag[i] = 1;
                cmp[i] = j+1;
                break;
            }
        }
    }
    for(i = 0;i<n;i++)
    {
        if(flag[i] == 1)
        {
            printf("\nPresent %d",cmp[i]);
        }
        else
        {
            printf("\nNot Present %d",j);
        }
    }
    return 0;
}
