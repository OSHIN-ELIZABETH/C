#include <stdio.h>

void print(int a[],int start,int n)
{

if (start == n-1)

{
printf("%d\n", a[start]);
}
else
{
printf("%d\n", a[start]);
print(a, start + 1,n);
}
}

int main()
{
int n ,arr[10],i;
printf("enter a number");
scanf("%d",&n);
printf("enter the array");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("\n Display the array elements\n");
print(arr,0,n);
}


