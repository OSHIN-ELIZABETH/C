#include <stdio.h>

void print(int a[], int n)
{
if (n == 1)
{

printf("%d\n", a[n - 1]);
}
else
{
printf("%d\n", a[n - 1]);
print(a, n - 1);
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
printf("Display the array elememts in reverse order\n"); print(arr, n);
}


