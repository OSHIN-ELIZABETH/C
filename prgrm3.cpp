#include<stdio.h>
#include<process.h>
void createarr(int a[],int n)
{
int i;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
printf("\t%d",a[i]);
}
void delet(int a[],int p,int n)
{
int i,j;
for(i=p-1;i<n;i++)
{
a[i]=a[i+1];
}
n=n-1;
for(i=0;i<n;i++)
printf("\t%d",a[i]);
}
void search(int a[],int e,int n)
{
int i;
for(i=0;i<n;i++)
{
if(a[i]==e)
{
printf("\n Element %d is found at position %d ",e,i+1);
break;
}
}
if(i==n)
{
printf("\ Element not found");
}
}
void disp(int a[],int n)
{
int i;
printf("\n Elements are:");
for(i=0;i<n;i++)
printf("\t%d",a[i]);
}

void sort(int a[],int n)
{
int i,j,t;
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
disp(a,n);
}
int main()
{
int a[10],n,p,e,ch;
printf("\n\t\tMENU DRIVEN PROGRMAM(USING LOCAL VARIABLES)");
printf("\n\t\t===========================================");
printf("\n Enter the limit:");
scanf("%d",&n);
do{
printf("\n------\nMENU\n------\n1.Create\n2.Search\n3.Sort\n4.Delete\n5.Exit\nEnter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:createarr(a,n);
break;
case 2:printf("\n Enter the element to be searched:");
scanf("%d",&e);
search(a,e,n);
break;
case 3:sort(a,n);
break;
case 4:printf("\nEnter the position to be deleted:");
scanf("%d",&p);
delet(a,p,n);
break;
case 5:exit(0);
}
}while(1);
}
