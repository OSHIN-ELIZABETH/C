//Use calloc to read n numbers and find the mode.
#include<stdio.h>
#include<malloc.h>
int main()
{
    int *a,i,j,n,sum=0,count,max,mode;
    printf("\nEnter the limit: ");
    scanf("%d", &n);
    a=(int*)calloc(n,sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("\nEnter a[%d]",i);
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
        if (count>max)
        {
            max=count;
            mode=a[i];
         }
    }
    printf("Mode = %d with a count of %d",mode,max);
    free(a);
}

