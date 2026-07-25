#include<stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

struct Student s[100];
int n = 0;

// Add Student
void addStudent()
{
    printf("\nEnter Roll No : ");
    scanf("%d", &s[n].roll);

    printf("Enter Name : ");
    scanf("%s", s[n].name);

    printf("Enter Marks : ");
    scanf("%f", &s[n].marks);

    n++;

    printf("\nStudent Added Successfully!\n");
}

// Display Students
void displayStudents()
{
    int i;

    if(n == 0)
    {
        printf("\nNo Student Records Found!\n");
        return;
    }

    printf("\n===== STUDENT RECORDS =====\n");

    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Roll No : %d\n", s[i].roll);
        printf("Name    : %s\n", s[i].name);
        printf("Marks   : %.2f\n", s[i].marks);
    }
}

// Search Student
void searchStudent()
{
    int roll, i, found = 0;

    printf("\nEnter Roll Number to Search : ");
    scanf("%d", &roll);

    for(i = 0; i < n; i++)
    {
        if(s[i].roll == roll)
        {
            printf("\nStudent Found!\n");
            printf("Roll No : %d\n", s[i].roll);
            printf("Name    : %s\n", s[i].name);
            printf("Marks   : %.2f\n", s[i].marks);

            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("\nStudent Not Found!\n");
    }
}

// Delete Student
void deleteStudent()
{
    int roll, i, j, found = 0;

    printf("\nEnter Roll Number to Delete : ");
    scanf("%d", &roll);

    for(i = 0; i < n; i++)
    {
        if(s[i].roll == roll)
        {
            for(j = i; j < n - 1; j++)
            {
                s[j] = s[j + 1];
            }

            n--; // Reduce total students

            found = 1;

            printf("\nStudent Deleted Successfully!\n");
            break;
        }
    }

    if(found == 0)
    {
        printf("\nStudent Not Found!\n");
    }
}

int main()
{
    int choice;

    do
    {
        printf("\n");
        printf("=================================\n");
        printf("   STUDENT MANAGEMENT SYSTEM\n");
        printf("=================================\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Delete Student\n");
        printf("5. Exit\n");
        printf("=================================\n");

        printf("Enter Your Choice : ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                deleteStudent();
                break;

            case 5:
                printf("\nProgram Ended Successfully.\n");
                break;

            default:
                printf("\nInvalid Choice! Please Try Again.\n");
        }

    } while(choice != 5);

    return 0;
}
