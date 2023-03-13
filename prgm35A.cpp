//linked stack
#include<stdio.h>
#include<stdlib.h>
#include<process.h>
struct stack{
	int data;
	struct stack *next;
};
struct stack *top=NULL;
typedef struct stack stack;
void push(int e){
 	stack *t;
	t=(stack *)malloc(sizeof(stack));
	t->data=e;
	t->next=top;
	top=t;
}
void disp(){
	stack *t;
	if(top==NULL){
		printf("\n Stack empty");
	}
	else{
		t=top;
		printf("\n Elements :");
		while(t!=NULL){
			printf("\t%d",t->data);
			t=t->next;
		}
	}
}
void pop(){
	if(top==NULL){
		printf("\n Stack empty");
	}
	else{
		printf("Deleted element :%d",top->data);
		top=top->next;
	}
}
int main(){
	int ch,e;
	printf("\n LINKED STACK\n-------------------\n");
	do{
		printf("\n1.push\n2.pop\n3.display\n4.exit\n choose your option:");
		scanf("%d",&ch);
		switch(ch){
			case 1:printf("\n enter element:");
					scanf("%d",&e);
					push(e);
					break;
			case 2:pop();
					break;
			case 3:disp();
					break;
			case 4:exit(1);	
					break;	
		}
	}while(1);
}
