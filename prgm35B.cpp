//linked queue
#include<stdio.h>
#include<stdlib.h>
#include<process.h>
struct queue{
	int data;
	struct queue *next;
};
struct queue *f=NULL,*r=NULL;
typedef struct queue queue;
void enqueue(int e){
 	queue *t;
	t=(queue *)malloc(sizeof(queue));
	t->data=e;
	t->next=NULL;
	if(f==NULL){
		f=t;
		r=t;
	}
	else{
		r->next=t;
		r=r->next;
	}
}
void disp(){
	queue *t;
	if(f==NULL){
		printf("\n queue empty");
	}
	else{
		t=f;
		printf("\n Elements are:");
		while(t!=NULL){
			printf("\t%d",t->data);
			t=t->next;
		}
	}
}
void dequeue(){
	if(f==NULL){
		printf("\n queue empty");
	}
	else{
		printf("Deleted element :%d",f->data);
		f=f->next;
		if(f==NULL)
			r=NULL;
	}
}
int main(){
	int ch,e;
	printf("\n LINKED LIST USING QUEUE\n-------------------\n");
	do{
		printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n Choose your option:");
		scanf("%d",&ch);
		switch(ch){
			case 1:printf("\n enter element:");
					scanf("%d",&e);
					enqueue(e);
					break;
			case 2:dequeue();
					break;
			case 3:disp();
					break;
			case 4:exit(1);	
					break;	
		}
	}while(1);
}
