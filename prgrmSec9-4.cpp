	//reverse 
#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *next;
};
struct node *ptr=NULL;
struct node *head=NULL;

void insert(int val)
{
if(head==NULL)
{
head=(struct node*)malloc(sizeof(struct node));
head->data=val;
head->next=NULL;
}
else
{
ptr=head;
while(ptr->next!=NULL)
{
ptr=ptr->next;
}
ptr->next=(struct node*)malloc(sizeof(struct node));
ptr->next->data=val;
ptr->next->next=NULL;
}
}

void display()
{
struct node *ptr=head;
while(ptr!=NULL)
{
printf("%d\t",ptr->data);
ptr=ptr->next;
}
printf("\n");
}

void reverseList()
{
struct node *prevNode, *curNode;
if(head!=NULL)//2 nodes
{
prevNode=head;
curNode=head->next;
head=head->next;
prevNode->next=NULL; 
while(head!=NULL)
{
head=head->next;
curNode->next=prevNode;
prevNode=curNode;
curNode=head;
}
head=prevNode;
}
display();
}

int main(){
int ch,val;
while(1){
printf("\n1. Insert.\n2. Display linked list\n3. reverse list\n4. exit.\nenter your choice:");
scanf("%d",&ch);
switch(ch){
case 1:printf("Enter the number to insert :");
      scanf("%d",&val);
insert(val);
break;
case 2:display();
break;
case 3:reverseList(); break;
case 4:exit(0);break;
default:printf("Wrong choice\n");
}
}
}

