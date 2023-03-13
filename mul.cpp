#include <stdio.h>
struct term
{
int coef;
int exp;
};
typedef struct term poly;
void multiply(poly p1[10],poly p2[10],int n1, int n2){
int i,j,n;
n=n1+n2;
poly mult[n];
for(i=0;i<n;i++)
{
mult[i].coef=0;
mult[i].exp=0;
}
for(i=0;i<n1;i++)
{
for(j=0;j<n2;j++)
{
mult[i+j].coef=mult[i+j].coef+p1[i].coef*p2[j].coef;
mult[i+j].exp=i+j;
}
}
printf("\n\nmultiplication :\n ");
for(i=n-1;i>0;i--)
{
if(mult[i-1].exp==0)
printf("%d",mult[n-i-1].coef);
else
printf("%dx^%d+",mult[n-i-1].coef,mult[i-1].exp);
}
}
int main()
{
struct term p[5],q[5],mult[10];
int i,n,m,j,k,temp,t;
printf("Enter the no of terms in polynomial 1:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter a coefficient and exponent of %dst term in polynomial 1:",i+1);
scanf("%d%d",&p[i].coef,&p[i].exp);
}
for(i=0;i<n-1;i++)
{
printf("%dx^%d+",p[i].coef,p[i].exp);
}
if(p[i].exp==0)
printf("%d",p[i].coef);
for(i=0;i<n;i++)
{
if(p[i].exp<p[i+1].exp)
{
temp=p[i].coef;
t=p[i].exp;
p[i].coef=p[i+1].coef;
p[i].exp=p[i+1].exp;
p[i+1].coef=temp;
p[i+1].exp=t;
}
}
printf("\nEnter the no of terms in polynomial 2:");
scanf("%d",&m);
for(i=0;i<m;i++)
{
printf("Enter a coefficient and exponent of %dst term in polynomial 2:",i+1);
scanf("%d%d",&q[i].coef,&q[i].exp);
}
for(i=0;i<n;i++)
{
if(q[i].exp<q[i+1].exp)
{
temp=q[i].coef;
t=q[i].exp;
q[i].coef=q[i+1].coef;
q[i].exp=q[i+1].exp;
q[i+1].coef=temp;
q[i+1].exp=t;
}
}
for(i=0;i<n-1;i++)
{
printf("%dx^%d+",q[i].coef,q[i].exp);
}
if(q[i].exp==0)
printf("%d",q[i].coef);
multiply(p,q,n,m);
return 0;
}

