

#include<stdio.h>
int i;

void disp(int a[],int m)
{

printf("\nThe polynomial is:");
for( i=m;i>=0;i--)
{

if(a[i]!=0&&i!=0)
printf("%dx^%d+",a[i],i);

else if(i==0)
printf("%d",a[i]);
}

}
int main()

{
int a[20],m;
printf("\n Polynomial Implementation");

printf("\n****************************");
printf("\nEnter the degree of first polynomial:");

scanf("%d",&m);
printf("\nEnter the coefficients:");
for(i=m;i>=0;i--)

scanf("%d",&a[i]);
disp(a,m);

}

