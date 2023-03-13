//read n integers and find mean
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    int n;
    int *arr;
    float sum = 0;
   float mean =0;
    printf("Enter the total number of elements you want to enter : ");
    scanf("%d",&n);
    arr = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d : ", (i + 1));
        scanf("%d", arr + i);
        sum += *(arr + i);
    }
    printf("mean is %f \n",sum/n);
    free(arr);
    return 0;
}
