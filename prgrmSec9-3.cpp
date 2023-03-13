//to delete element from beginning,end,
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
int data;
struct node *next;
};
struct node *head=NULL,*q,*t;
void insert_beg()
{
int num;
t=(struct node*)malloc(sizeof(struct node));
printf("Enter data:");
scanf("%d",&num);
t->data=num;
if(head==NULL)
{
t->next=NULL;
head=t;
}
else
{
t->next=head;
head=t;
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
if(head==NULL)
{
head=t;
}
else
{
q=head;
while(q->next!=NULL)
q=q->next;
}
q->next=t;

}
int insert_pos()
{
int pos,i,num;
if(head==NULL)
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
q=head;
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
if(head==NULL)
{
printf("List is empty!!");
}
else
{
q=head;
printf("The linked list is:\n");
while(q!=NULL)
{
printf("%d\t",q->data);
q=q->next;
}
}
}
void delete_beg()
{
if(head==NULL)
{
printf("The list is empty!!");
}
else
{
q=head;
head=head->next;
printf("Deleted element is %d",q->data);
free(q);
}
}
void delete_end()
{
if(head==NULL)
{
printf("The list is empty!!");
}
else
//it has 3 nodes atleast .  
{
q=head;
while(q->next->next!=NULL)
{

q=q->next;
}
t=q->next;
q->next=NULL;
printf("Deleted element is %d",t->data);
free(t);
}
}
int delete_pos()
{
int pos,i;
if(head==NULL)
{
printf("List is empty!!");
return 0;
}
printf("Enter position to delete:");
scanf("%d",&pos);
q=head;
for(i=1;i<pos-1;i++)
{
if(q->next==NULL)
{
printf("There are less elements!!");
return 0;
}
q=q->next;
}
t=q->next;
q->next=t->next;
printf("Deleted element is %d",t->data);
free(t);
return 0;
}
int main()
{
int ch;
while(1)
{
printf("\n\n---- Singly Linked List(SLL) Menu ----");
printf("\n1.Insert\n2.Display\n3.Delete\n4.Exit\n\n");
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
case 4: exit(0);
default: printf("Wrong Choice!!");
}
break;
case 2: display();
break;
case 3: printf("\n---- Delete Menu ----");
printf("\n1.Delete from beginning\n2.Delete from end\n3.Delete from specified position\n4.Exit");
printf("\n\nEnter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1: delete_beg();
break;
case 2: delete_end();
break;
case 3: delete_pos();
break;
case 4: exit(0);
default: printf("Wrong Choice!!");
}
break;
case 4: exit(0);
default: printf("Wrong Choice!!");
}
}
return 0;
}

