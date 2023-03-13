#include <stdio.h>

int x;

int s=5;

void local()


{

printf("\nDemonstrating Localvariable\n\n");

int c=5;

printf("c=%d\n",c);

}

void Global()

{

printf("\nDemonstrating	Global variable\n\n");

printf("s=%d\n x=%d\n ",s,x);

}

void
autoStorageClass()

{


printf("\nDemonstrating auto class\n\n");

auto int a = 32;

printf(" a=%d\n",a);

printf("--------------------------------");

}


void registerStorageClass(

)

{


printf("\nDemonstrating	register class\n\n");



 
int i;

register int k;

int s=0;

for(i=0;i<s;i++)

{

s=s+1;

}

k=s;

printf("k=%d",k);


printf("--------------------------------");

}




void
externStorageClass()

{


printf("\nDemonstrating extern class\n\n");

extern int x;

printf("x: %d\n", x);

x = 2;

printf("modified value of x: %d\n",x);


printf("--------------------------------");

}


void
staticStorageClass()

{


printf("\nDemonstrating static class\n\n");

static int i;

printf("i=%d\n",i++);


printf("-------------------------------");

}

 
int main()

{


printf("A program to demonstrate 	Storage Classes in C\n\n");



//	To demonstrate local variable

int c=8;

local();

printf("c=%d\n",c);


//	To demonstrate Global variable

int x=2;

Global();

printf("s=%d x=%d\n\n",s,x);


//	To demonstrate register Storage Class

registerStorageClass(
);


//	To demonstrate extern Storage Class

externStorageClass();


//	To demonstrate static Storage Class

staticStorageClass();

staticStorageClass();




printf("\n\nStorage Classesdemonstrated");
}

