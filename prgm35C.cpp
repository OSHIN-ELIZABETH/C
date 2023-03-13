//circular linked list
#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};
typedef struct node  clist;
clist *head = NULL;
void insertion(int a) {
    clist *t;
    if(head == NULL) {
        head = (clist *)malloc(sizeof(clist));
        head->data = a;
        head->next = head;
    }
    else {
       t = head;
       while(t->next != head) { 
           t = t->next;
       }
        t->next = (clist *)malloc(sizeof(clist));
        t->next->data = a;
        t->next->next = head; 
    }
}
void disp() {
    clist *t;
    t = head;
    if(t == NULL) {
        printf("Empty C List");
    }
    else {
        do {
            printf("%d\t",t->data);
            t = t->next;
        }while(t != head);
    }
}
int main()
{
	int ch,e;
	printf("\n CIRCULAR LINKED LIST \n-------------------\n");
	do{
		printf("\n1.Insertion\n2.Display\n3.Exit\n Choose your option:");
		scanf("%d",&ch);
		switch(ch){
			case 1:printf("\n enter element:");
					scanf("%d",&e);
					insertion(e);
					break;
			case 2:disp();
					break;
			case 3:exit(1);		
		}
	}while(1);
    return 0;
}
