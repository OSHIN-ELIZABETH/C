#include<stdio.h>
#include<string.h>
#define max 100
int top=-1;
char s[10];

void push(char ch)
{
if(top==max-1)
printf("\nSTACK OVERFLOW!!!!!");
else{
top++;
s[top]=ch;
}
}
void pop(){
if(top==-1)
printf("\nSTACK UNDERFLOW!!!!!");
else{
printf("%c",s[top]);
top=top-1;
}
}
int main()
{
int i;
printf("\nREVERSE A STRING");
printf("\n----------------");
printf("\n Enter a string:");
gets(s);
for(i=0;i<strlen(s);i++)
push(s[i]);
printf("\n Reversed string is :");
while(top!=-1)
{
pop();
}
}
