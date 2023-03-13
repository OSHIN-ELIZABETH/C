#include<stdio.h>
#include<ctype.h>
#define N 5

int stack[N];

int top = -1;

void push(int e)
{

if(top == N-1)
{

printf("\n Stack is full ");
}
else

{
top=top+1;

stack[top]=e;
}
}

int pop()
{

if(top==-1)
{

return 0;
}
else

{
return stack[top--];

}
}

int evlPost(char exp[])
{

int i=0;
int op1,op2,value;

while(exp[i] !='\0')
{

if(isdigit(exp[i]))
{
push((int)(exp[i]-'0'));

}

 
else
{

op2=pop();
op1=pop();
switch(exp[i])

{
case '+' :

value = op1 + op2;
break;
case '-' :

value = op1- op2;

break;

case '*' :
value = op1*op2;
break;

case '/':
value=op1/op2;

break;
}

}
i++;

}
return value;

}

int main()
{
char exp[25];

int value;


printf("\nEnter the postfix expression : ");
gets(exp);

value= evlPost(exp);

printf("\nThe result of the expression is : %d ", value);
}

