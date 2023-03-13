//demonstrate a linked list creation and display.
#include<stdio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
void insert (int e)
{
    struct node *t;
    if(head == NULL)
    {
        head=(struct node *)malloc(sizeof (struct node));
        head->data=e;
        head->next=NULL;
    }
    else
    {
        t=head;
        while(t->next != NULL){
            t=t->next;    
        }
        t->next=(struct node *)malloc(sizeof(struct node));
        t->next->data=e;
        t->next->next=NULL;
    }
}
void disp()
{
    struct node *t;
    for(t=head;t->next!=NULL;t=t->next)
    {
        printf("%d\t",t->data);
    }
}
int main()
{
    insert(15);
    insert(26);
    insert(38);
    insert(50);
    insert(60);
    disp();
}
