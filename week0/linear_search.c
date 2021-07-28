#include<stdio.h>
int main()
{
    int ar[100],n,f=-1,i,ele;
    printf("Enter no. of elements: ");
    scanf("%d",&n);
    printf("\nEnter element to search: ");
    scanf("%d",&ele);
    printf("\nEnter the elements\n");
    for(i = 0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i = 0;i<n;i++)
    {
        if(ar[i] == ele)
        {
            printf("break");
            f = i;
            break;
        }
    }
    if(f == -1)
    {
        printf("\nElement not found");
        printf("\nNo. of comparisons: %d",n);
    }
    else
    {
        printf("\nElement found at index : %d",f);
        printf("\nNo. of comparisons: %d",f+1);
    }
    return 0;
}
