//poly subtraction
#include<stdio.h>
struct poly{
int coeff;
  int exp;
};
int m,n,i;
struct poly a[20],b[20],c[20];
void disp(struct poly p[20],int k)
{
    printf("\nThe polynomial is : ");
 	  for(i = k; i >= 0; i--){   
		  if (i > 0) 
		  {                                                 
     	   printf("%dx^%d", p[i].coeff, p[i].exp);
        	 printf(" + ");
        }
        else
         printf("%d", p[i].coeff);
    }        
}
void sub(struct poly p1[20],struct poly p2[20],int m,int n){
    int k=(m>n)?m:n;
    for(i=0;i<=k;){
        if(p1[i].exp==p2[i].exp){
        c[i].coeff=p1[i].coeff-p2[i].coeff;
        c[i].exp=p1[i].exp;
        i++;
    }
    else if(p1[i].exp>p2[i].exp){
        c[i].coeff=p1[i].coeff;
        c[i].exp=p1[i].exp;
         i++;
    }
    else{
    c[i].coeff=p2[i].coeff;
    c[i].exp=p2[i].exp;
    i++;
   }
}
disp(c,k);
}
void read(struct poly a[20] , int m ){
    printf("ENTER COEFFICIENT(CONSTANT) :");
    for(i=0;i<=m;i++){
        scanf("%d",&a[i].coeff);
        a[i].exp=i;
    }
}
int main(){
    int ch;
    printf("\n POLYNOMIALS SUBSTRACTION");
    printf("\n-------------------------");
    printf("\n\nENTER DEGREE OF POLYNOMIAL 1: ");
    scanf("%d",&m);
    read(a,m);
    disp(a,m);
    printf("\n\nENTER DEGREE OF POLYNOMIAL 2: ");
    scanf("%d",&n);
    read(b,n);
    disp(b,n);
    printf("\n\n DIFFERENCE\n");
    sub(a,b,m,n);
}
