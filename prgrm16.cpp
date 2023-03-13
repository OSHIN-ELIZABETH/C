
//Q16. Polynomial addition using array

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

void add(int a[],int b[],int m,int n){
int sum[100];

printf("\nSUM:");
for(i=0;i<=m;i++)
{

sum[i]=a[i];
}

if(m>n)

n=m;

for(i=0;i<=n;i++)
{

if(sum[i]!=a[i])

sum[i]=0;

sum[i]=sum[i]+b[i];
}

disp(sum,n);
}
int main()

{
int a[20],b[30],m,n;

printf("\n Polynomial Implementation");
printf("\nEnter the degree of first polynomial:");

scanf("%d",&m);
printf("\nEnter the coefficients:");

for(i=m;i>=0;i--)
scanf("%d",&a[i]);
disp(a,m);

 
printf("\nEnter the degree of second polynomial:");
 scanf("%d",&n);

printf("\nEnter the coefficients:");
for(i=n;i>=0;i--)
scanf("%d",&b[i]);

disp(b,n);
add(a,b,m,n);

}


