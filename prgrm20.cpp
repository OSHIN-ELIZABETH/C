//poly multiplication
#include<stdio.h>
int deg[2],i,j,k,size;
struct poly{
    int exp;
    int coef;
};
typedef struct poly polynomial;
polynomial p[5][5];
polynomial dif[5];
void readpoly(){
    for(j=0;j<2;j++){
        printf("\nEnter the degree of the polynomial %d:",j+1);
        scanf("%d",&deg[j]);    
        for(i=0;i<=deg[j];i++){
            if(i==0){
                printf("\nEnter the constant :");
                scanf("%d",&p[j][i].coef);
                p[j][i].exp=i;
            }
            else{
                printf("\nX^%d :",i);
                scanf("%d",&p[j][i].coef);
                p[j][i].exp=i;
            }
        }
    }
}
void disp(){
    for(j=0;j<2;j++){
        printf("\nPolynomial %d: ",j+1);
        for(i=deg[0];i>=0;i--){
            if(i==0){
                printf("%d",p[j][i].coef);
            }
            else{
                printf("%d X^%d + ",p[j][i].coef,p[j][i].exp);    
            }
        }
    }
}
void polymul(){
    int m,n,h,size;
    m=deg[0]+1;
    n=deg[1]+1;
    size=m*n;
    h=deg[0]+deg[1];
    polynomial mul[size];
    k=0;
        for(i=0;i<=deg[0];i++){
            for(j=0;j<=deg[1];j++){
                mul[k].coef=p[0][i].coef*p[1][j].coef;
                mul[k].exp = p[0][i].exp + p[1][j].exp;
                k++;
                if(k>size){
                    break;
                }
            }        
        }
    polynomial final[h];
    for(i=0;i<=h;i++){
        final[i].coef=0;
        final[i].exp=0;
    }
    for(k=h;k>=0;k--){
        for(i=0;i<=size;i++){
            if(k==mul[i].exp){
                final[k].coef = final[k].coef + mul[i].coef;
                final[k].exp=mul[i].exp;
            }
            if(k<0){
                break;
            }
        }
    }    
    printf("\nProduct:");
    for(k=h;k>=0;k--){
        if(k==0){
            printf("%d",final[k].coef);
        }
        else{
            printf("%d X^%d + ",final[k].coef,final[k].exp);    
        }        
    }
    
}


int main()
{
    readpoly();    
    disp();
    polymul();
}
