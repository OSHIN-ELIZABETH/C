 //17. Read and disp poly using struct
 #include<stdio.h>

 struct poly
 {
int coeff;
int expo;
 };
 
 struct poly p1[10];

 
 int readPoly(struct poly []);
 void displayPoly( struct poly [],int terms);

 int main()
 {
int t1;

t1=readPoly(p1);
printf(" \n The polynomial : ");
displayPoly(p1,t1);


return 0;
 }

 int readPoly(struct poly p[10])
 {
int t1,i;

printf("\n\n Enter the total number of terms in the polynomial:");
scanf("%d",&t1);

printf("\n Enter the COEFFICIENT and EXPONENT in DESCENDING ORDER\n");
for(i=0;i<t1;i++)
{
printf("   Enter the Coefficient(%d): ",i+1);
scanf("%d",&p[i].coeff);
printf("      Enter the exponent(%d): ",i+1);
scanf("%d",&p[i].expo);    
}

return(t1);
 }



 void displayPoly(struct poly p[10],int term)
 {
  int k;

for(k=0;k<term-1;k++)
printf("%d(x^%d)+",p[k].coeff,p[k].expo);
printf("%d",p[term-1].coeff);





}
