#include<stdio.h>
#include<process.h>
int a[10],n,i;
void createArray()

{

printf("\nEnter the limit:");
scanf("%d",&n);
for(i=0;i<n;i++)
{

printf("\n Enter the element %d:",i+1);
scanf("%d",&a[i]);
}

}
void deleteArray()
{
int j,p;
printf("\n Enter the position to be deleted:");
scanf("%d",&p);
for(i=p-1;i<n;i++){
a[i]=a[i+1];
}
n=n-1;

printf("\nAfter deletion elements are: ");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
printf("\n----------------------------\n");
}

void searchArray()
{
int el;
printf("\n Enter the element to be searched:");
scanf("%d",&el);
for(i=0;i<n;i++)
{
if(a[i]==el){
printf("\n Element %d is found at position %d ",el,i+1);

}
}
}
void dispArray()
{
for(i=0;i<n;i++)
printf("%d\t",a[i]);
}

 
void sortArray()
{
int j,t;
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
printf("\nAfter Sorting:-");
printf("\n---------------\n");
dispArray();
}
int main()
{
int ch;

printf("\n\t\t\tMENU DRIVEN PROGRAM (USING GLOBAL VARIABLES)"); printf("\n\t\t\t============================================");
do
{

printf("\n------\nMENU\n------\n1.Create\n2.Search\n3.Delete\n4.Sort\n5.Display\n6.Exit\nEnter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:createArray();
break;
case 2:searchArray();
break;
case 3:deleteArray();
break;
case 4:sortArray();
break;
case 5:dispArray();
break;
case 6:exit(0);
}
}while(1);
}

