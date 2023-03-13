#include<stdlib.h>
#include<string.h>
#include<stdio.h>
struct Student
{
    int rollnumber;
    char name[100];
    char phone[100];
    float percentage;
    struct Student *next;
    
}* head;
void insert(int rollnumber, char* name, char* phone, float percentage)
{
    
    struct Student * student = (struct Student *) malloc(sizeof(struct Student));
    student->rollnumber = rollnumber;
    strcpy(student->name, name);
    strcpy(student->phone, phone);
    student->percentage = percentage;
    student->next = NULL;
    
    if(head==NULL){
     
        head = student;
    }
    else{
       
        student->next = head;
        head = student;
    }
    
}
void search(int rollnumber)
{
    struct Student * temp = head;
    while(temp!=NULL){
        if(temp->rollnumber==rollnumber){
            printf("Roll Number: %d\n", temp->rollnumber);
            printf("Name: %s\n", temp->name);
            printf("Phone: %s\n", temp->phone);
            printf("Percentage: %0.4f\n", temp->percentage);
            return;
        }
        temp = temp->next;
    }
    printf("\tStudent with roll number %d is not found !!!\n", rollnumber);
}
void update(int rollnumber)
{
    
    struct Student * temp = head;
    while(temp!=NULL){
        
        if(temp->rollnumber==rollnumber){
            printf("\tRecord with roll number %d Found !!!\n", rollnumber);
            printf("Enter new name: ");
            scanf("%s", temp->name);
            printf("\nEnter new phone number: ");
            scanf("%s", temp->phone);
            printf("\nEnter new percentage: ");
            scanf("%f",&temp->percentage);
            printf("\nUpdation Successful!!!\n");
            return;
        }
        temp = temp->next;
        
    }
    printf("\nStudent with roll number %d is not found !!!\n", rollnumber);
    
}
void Delete(int rollnumber)
{
    struct Student * temp1 = head;
    struct Student * temp2 = head; 
    while(temp1!=NULL){
        
        if(temp1->rollnumber==rollnumber){
            
            printf("\nRecord with roll number %d Found !!!\n", rollnumber);
            
            if(temp1==temp2){
                
                head = head->next;
                free(temp1);
            }
            else{
                
                temp2->next = temp1->next;
                free(temp1); 
            }
            
            printf("\nRecord Successfully Deleted !!!\n");
            return;
            
        }
        temp2 = temp1;
        temp1 = temp1->next;
        
    }
    printf("\nStudent with roll number %d is not found !!!\n", rollnumber);
    
}
void display()
{
    struct Student * temp = head;
    while(temp!=NULL){
        
        printf("\nRoll Number: %d\n", temp->rollnumber);
        printf("\nName: %s\n", temp->name);
        printf("\nPhone: %s\n", temp->phone);
        printf("\nPercentage: %0.4f\n\n", temp->percentage);
        temp = temp->next;
        
    }
}
int main()
{
    head = NULL;
    int choice;
    char name[100];
    char phone[100];
    int rollnumber;
    float percentage;
    printf("\n\n\t\t\t\t\t STUDENT RECORD MANAGEMENT\n");
    printf("\t\t\t\t\t _________________________\n");
    printf("1 To Insert student details\n\n2 To search for student details\n\n3 To delete student details\n\n4 To update student details\n\n5 To display all student details");
    do
    {
        printf("\n\nEnter Choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                printf("\nEnter roll number: ");
                scanf("%d", &rollnumber);
                printf("\nEnter name: ");
                scanf("%s", name);
                printf("\nEnter phone number: ");
                scanf("%s", phone);
                printf("\nEnter percentage: ");
                scanf("%f", &percentage);
                insert(rollnumber, name, phone, percentage);
                break;
            case 2:
                printf("\nEnter roll number to search: ");
                scanf("%d", &rollnumber);
                search(rollnumber);
                break;
            case 3:
                printf("\nEnter roll number to delete: ");
                scanf("%d", &rollnumber);
                Delete(rollnumber);
                break;
            case 4:
                printf("\nEnter roll number to update: ");
                scanf("%d", &rollnumber);
                update(rollnumber);
                break;
            case 5:
                display();
                break;
        }
        
    } while (choice != 0);
}
