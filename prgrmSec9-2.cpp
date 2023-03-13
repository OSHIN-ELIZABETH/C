//insert a new node from beg,end,specified pos in LINKED LIST
#include<stdio.h>
#include<malloc.h>
struct node
{
int data;
struct node *next;
};
struct node *start=NULL,*q,*t;
void insert_beg()
{
int num;
t=(struct node*)malloc(sizeof(struct node));
printf("Enter data:");
scanf("%d",&num);
t->data=num;
if(start==NULL)
{
t->next=NULL;
start=t;
}
else
{
t->next=start;
start=t;
}
}
void insert_end()
{
int num;
t=(struct node*)malloc(sizeof(struct node));
printf("Enter data:");
scanf("%d",&num);
t->data=num;
t->next=NULL;
if(start==NULL)
{
start=t;
}
else
{
q=start;
while(q->next!=NULL)
q=q->next;
}
q->next=t;

}
int insert_pos()
{
int pos,i,num;
if(start==NULL)
{
printf("List is empty!!");
return 0;
}
t=(struct node*)malloc(sizeof(struct node));
printf("Enter data:");
scanf("%d",&num);
printf("Enter position to insert:");
scanf("%d",&pos);
t->data=num;
q=start;
for(i=1;i<pos-1;i++)
{
if(q->next==NULL)
{
printf("There are less elements!!");
return 0;
}
q=q->next;
}
t->next=q->next;
q->next=t;
return 0;
}
void display()
{
if(start==NULL)
{
printf("List is empty!!");
}
else
{
q=start;
printf("The linked list is:\n");
while(q!=NULL)
{
printf("%d\t",q->data);
q=q->next;
}
}
}
int main()
{
int ch;
while(1)
{
printf("\n\n---- Singly Linked List(SLL) Menu ----");
printf("\n1.Insert\n2.Display\n3.Exit\n\n");
printf("Enter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("\n---- Insert Menu ----");
printf("\n1.Insert at beginning\n2.Insert at end\n3.Insert at specified position\n4.Exit");
printf("\n\nEnter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1: insert_beg();
break;
case 2: insert_end();
break;
case 3: insert_pos();
break;
case 4: break;
default: printf("Wrong Choice!!");
}
break;
case 2: display();
break;
case 3: break;
default: printf("Wrong Choice!!");
}
}
return 0;
}
