#include<stdio.h>

struct date{
int day;

int month;

int year;
};

struct date date1;
struct date date2;
void read_date1(){

printf("Enter the date:");
scanf("%d",&date1.day);

printf("Enter the month:");
scanf("%d",&date1.month);
printf("Enter the year in format 'YYYY':");

scanf("%d",&date1.year);

if(date1.month>12){
printf("month should not be greater than 12.");
}

else if(date1.day>31){
printf("day should not be greater than 31.");

}
else{

printf("The date is: %d/%d/%d",date1.day,date1.month,date1.year); printf("\n");
}

}
void read_date2(){

printf("Enter the date:");
scanf("%d",&date2.day);

printf("Enter the month:");
scanf("%d",&date2.month);
printf("Enter the year in format 'YYYY':");

scanf("%d",&date2.year);

if(date2.month>12){
printf("month should not be greater than 12.");
}

else if(date2.day>31){
printf("day should not be greater than 31.");

}
else{

 
printf("The date is: %d/%d/%d",date2.day,date2.month,date2.year);

}

}

void date_compare(){

if(date1.day==date2.day&& date1.month==date2.month && date1.year==date2.year){ printf("\nDate is same!!!");
}
else{

printf("\nDate is different!!!");

}

}
int main(){

read_date1();
read_date2();

date_compare();
}

