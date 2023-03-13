//struct books
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
struct book
{
char book_name[25];
char author_name[25];
};
struct book *bptr;
void read(int n)
{
int i;
for(i=0;i<n;i++)
{
fflush(stdin);
printf("\nEnter name of book %d:",i+1);
gets((bptr+i)->book_name);
fflush(stdin);
printf("Enter name of author %d:",i+1);
gets((bptr+i)->author_name);
}
}
void display(int n)
{
int i;
for(i=0;i<n;i++)
{
printf("\nname of book %d is : %s",i+1,(bptr+i)->book_name);
printf("\nname of author %d is : %s",i+1,(bptr+i)->author_name);
}
}
int main()
{
int n;
printf("Enter the number of books:");
scanf("%d",&n);
bptr=(struct book*)malloc(n*sizeof(struct book));
read(n);
display(n);
}

