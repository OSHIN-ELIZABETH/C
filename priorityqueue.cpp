//PRIORITY QUEUE
#include<stdio.h>
#include<stdlib.h>

#define max 5

int insert(int);
int Delete(int);
int create();
int display();
int check(int);

int pri_que[max];
int front,rear;
int main()
{
	int ch,i,a;
	create();
	do
	{
	
	printf("priority queue \n 1. INSERT ELEMENT BY PRIORITY \n 2. DELETE ELEMENT \n 3. DISPLAY ELEMENT ");
	printf("Enter your choice : ");
	scanf("%d",&ch);
	switch (ch)
	{
		case 1: printf("Enter the element to insert :");
		scanf("%d",&i);
		 insert(i);
		break;
		case 2: printf("Enter element to delete :");
		scanf("%d",&a);
		 Delete(a);
		break;
		case 3: printf("Displaying elements in queue :");
		 display();
		break;
		default:
		printf("wrong input !!!");
	}
	}while (ch!=4);
}
	 int create()
	{
		front==rear==-1;
		
	}
	
	int insert(int data)
	{
		if((front==0 )&&(rear>=max-1))
		{
			printf("queue is full ----> overflow ");
		
			
		}
		if(front==rear==-1)
		{
			front++;
			rear++;
			pri_que[rear]=data;
		
		}
		else
		check(data);
		rear++;
	}
		int check(int data)
		{
			int i,j;
			for(int i=0;i<=rear;i++)
			{
				if(data>pri_que[i])
				{
					for(j=rear+1;j>i;j--)
					{
						pri_que[j]=pri_que[j-1];
						
					}
					pri_que[i]=data;
					
						
				}
			}
			pri_que[i]=data;
		
		}
		
		int Delete(int data)
		{
			for(int i=0;i<=rear;i++)
			{
				if(data==pri_que[i])
				{
					for(;i<rear;i++)
					{
						pri_que[i]=pri_que[i+1];
					}
					
					
					pri_que[i]=-99;
					rear--;
					if(rear==-1)
					front=-1;
				}
			}
			printf("element not found to delete ");
		}
		
		int display()
		{
			if((front==-1)&&(rear==-1))
			printf("nothing to display ");
			
			else
			{
				for(int i=0;i<=rear;i++)
				{
					printf("%d",pri_que[i]);
					
				}
			}
		}
	
	

	
	
	
	
	
	
	
	
	

