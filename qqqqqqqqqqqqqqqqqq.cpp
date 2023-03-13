#include<stdio.h>
#include<string.h>



    int roll;

    char Name[20];

    char Dept[20];

    int Marks;
    Node* next;
 
// Stores the head of the Linked List

Node* head = new Node();
 
// Check Function to check that if
// Record Already Exist or Not

bool check(int x)
{

    // Base Case

    if (head == NULL)

        return false;
 

    Node* t = new Node;

    t = head;
 

    // Traverse the Linked List

    while (t != NULL) {

        if (t->roll == x)

            return true;

        t = t->next;

    }
 

    return false;
}
 
// Function to insert the record

void Insert_Record(int roll, char Name,char Dept, int Marks)
{

    // if Record Already Exist

    if (check(roll)) {

         printf("Student with this  record Already Exists\n ");

        return;

    }
 

    // Create new Node to Insert Record

    Node* t = new Node();

    t->roll = roll;

    t->Name = Name;

    t->Dept = Dept;

    t->Marks = Marks;

    t->next = NULL;
 

    // Insert at Begin

    if (head == NULL

        || (head->roll >= t->roll)) {

        t->next = head;

        head = t;

    }
 

    // Insert at middle or End

    else {

        Node* c = head;

        while (c->next != NULL

               && c->next->roll < t->roll) {

            c = c->next;

        }

        t->next = c->next;

        c->next = t;

    }
 

    printf( "Record Inserted Successfully\n");
}
 
// Function to search record for any
// students Record with roll number

void Search_Record(int roll)
{

    // if head is NULL

    if (!head) {

        printf( "No such Record Available\n");

        return;

    }
 

    // Otherwise

    else {

        Node* p = head;

        while (p) {

            if (p->roll == roll) {

                printf( "Roll Number\t %d\n", p->roll );

                printf( "Name\t\t%s\n", p->Name);

                printf( "Department\t%d\n", p->Dept);

                printf( "Marks\t\t%d\n", p->Marks);

                return;

            }

            p = p->next;

        }
 

        if (p == NULL)

            printf("No such Record Available\n");

    }
}
 
// Function to delete record students
// record with given roll number
// if it exist

int Delete_Record(int roll)
{

    Node* t = head;

    Node* p = NULL;
 

    // Deletion at Begin

    if (t != NULL

        && t->roll == roll) {

        head = t->next;

        delete t;
 

        printf("Record Deleted Successfully\n");

        return 0;

    }
 

    // Deletion Other than Begin

    while (t != NULL && t->roll != roll) {

        p = t;

        t = t->next;

    }

    if (t == NULL) {

        printf( "Record does not Exist\n");

        return -1;

        p->next = t->next;
 

        delete t;

        printf("Record Deleted Successfully\n");
 

        return 0;

    }
}
 
// Function to display the Student's
// Record

void Show_Record()
{

    Node* p = head;

    if (p == NULL) {

        printf("No Record Available\n");

    }

    else {

        printf("Index\tName\tCourse \tMarks\n");
 

        // Until p is not NULL

        while (p != NULL) {

            printf("%d%s%d%d",  p->roll , "    \t",p->name,"\t",p->Dept,"\t",p-Marks,"\t");

            p = p->next;

        }

    }
}
 
// Driver code

int main()
{

    head = NULL;

    string Name, Course;

    int Roll, Marks;
 

    // Menu-driven program

    while (true) {

        printf("\n\t\tWelcome to Student Record "

                "Management System\n\n\tPress\n\t1 to "

                "create a new Record\n\t2 to delete a "

                "student record\n\t3 to Search a Student "

                "Record\n\t4 to view all students "

                "record\n\t5 to Exit\n";

        "\nEnter your Choice\n");

        int Choice;
 

        // Enter Choice

        scanf(" Choice",&choice);

        if (Choice == 1) {

            printf("Enter Name of Student\n");

            scanf("%s",&Name);

            printf( "Enter Roll Number of Student\n");

            scanf("%d",&Roll);

            printf( "Enter Course of Student \n");

            scanf("%s", &Course);

            printf( "Enter Total Marks of Student\n");

            scanf("%d",&Marks);

            Insert_Record(Roll, Name, Course, Marks);

        }

        else if (Choice == 2) {

            printf( "Enter Roll Number of Student whose record is to be deleted\n");

            scanf("%d",&Roll);

            Delete_Record(Roll);

        }

        else if (Choice == 3) {

            printf("Enter Roll Number of Student whose record you want to Search\n");
 				scanf("%d",&Roll);
            

            Search_Record(Roll);

        }

        else if (Choice == 4) {

            Show_Record();

        }

        else if (Choice == 5) {

            exit(0);

        }

        else {

            printf( "Invalid Choice ....Try Again\n";

        }

    }

    return 0;
}
