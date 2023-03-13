#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct employee

{

char name[30];
int eid;

int salary;
}emp[5];
void emp_search(int r)

{
int id,i;

printf("\nEnter Employee-Id to be Searched : ");
scanf("%d",&id);
printf("----------------------------------------\n");

for(i=0;i<r;i++)
{

if(emp[i].eid==id)
{
printf("Employee Id : %d",emp[i].eid);

printf("\nName	: %s",emp[i].name);
printf("\nSalary	: %d\n",emp[i].salary);

}
}
}

void delet(int r)
{

int pos,i;
printf("\nEnter Employee to be deleted : ");
scanf("%d",&pos);

printf("----------------------------------------\n");
for(i=pos-1;i<r;i++)

{
{
emp[i]=emp[i+1];

}

r=r-1;
for(i=0;i<r;i++)
{

printf("%d is deleted\n",emp[i]);

}
}

 
}
void display(int r)

{
int i;
printf("\nList of All Employees:\n");

printf("-------------------------------\n");
printf("Emp-Id\tEmp-Name Salary\n");

printf("--------------------------------\n");
for(i=0;i<r;i++)
{

printf("%d\t%s\t  %d\n",emp[i].eid,emp[i].name,emp[i].salary);

}

}
void sort(int r){
int i,j;

struct employee temp;
for(i=0;i<r-1;i++)

for(j=i+1;j<r;j++)
if(strcmp(emp[i].name,emp[j].name)>0){
temp=emp[i];

emp[i]=emp[j];
emp[j]=temp;

}
}
void salary(int r)

{
int i,j;

struct employee temp;

printf("\nDetails of Employee Salary \n"); printf("------------------------------------------------");

for(i=0;i<r;i++)
for(j=0;j<r-1-i;j++)

if(emp[j].salary<emp[j+1].salary)
{
temp=emp[j+1];

emp[j+1]=emp[j];
emp[j]=temp;

}

}
int main()

{
int n,i,ch;
printf("\n\nEnter Limit  : ");

scanf("\n %d",&n);
for(i=0;i<n;i++)

{
printf("-----------------------------------------");
printf("\n\tEnter Details of Employee-%d",i+1);

printf("\n-----------------------------------------");

 
printf("\nName of Employee : ");
scanf("%s",emp[i].name);

printf("Employee-Id	: ");
scanf("%d",&emp[i].eid);
printf("Salary : ");

scanf("%d",&emp[i].salary);
}

while(1)
{
printf("-----------------------------------------\n");

printf("\t\tMenu\n");

printf("-----------------------------------------");

printf("\n 1:Search Employee by E-ID");
printf("\n 2:List of All Employee");
printf("\n 3:Sort The Employee By USing Salary ");

printf("\n 4:Sort The Employee By Using E-NAME");
printf("\n 5:Delete The Employee By Using E-Id");

printf("\n 6:Exit");
printf("\n----------------------------------------\n");
printf("Enter Your Choice : ");

scanf("\n %d",&ch);
switch(ch)

{
case 1: emp_search(n);
break;

case 2: display(n);
break;

case 3: salary(n);
for(i=0;i<n;i++)
{
 

printf("\n Salary: %d\n",emp[i].salary);
 
}

break;
case 4: sort(n);
for(i=0;i<n;i++){

printf("\n Employee Name : %s",emp[i].name);
printf("\n Employee-Id	: %d",emp[i].eid);

printf("\n Salary	: %d\n",emp[i].salary);
}
break;

case 5: delet(n);
break;

case 6: exit(0);
}
}

return 0;
}


