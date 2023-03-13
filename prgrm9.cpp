#include<stdio.h>
#define N 5
int top=-1;
int a[N];
void push(int e)
{

if(top+1==N)
{
printf("stack is full\n");

}
else
{
top=top+1;
a[top]=e;

}
}
void pop()
{

if(top==-1)
{
printf("stack is empty");
}
else
{


printf("%d\t",a[top]);
top=top-1;
}
}
void disp(int e)
{
printf("%d\t",e);
}
void peek()
{
if(top==-1)
{
printf("stack is empty\n");

}
else
{
printf("%d\t",a[top]);

}

 
}
int main()
{
int n,i;
int ch;
do{
printf("\n\nMENU\n1. PUSH\n2. POP\n3. PEEK\n4.Display\nChoose an option:");
scanf("%d",&ch);


switch(ch){

case 1:
printf("enter the no\n");
scanf("%d",&n);
push(n);
break;
case 2:
pop();
break;
case 3:
peek();
break;
case 4:
disp(n);
break;
default:printf("wrong choice\n");
}
}while(ch!=0);
}

