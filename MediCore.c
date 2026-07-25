#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Patient
{
    int id;
    char name[50];
    int age;
    char gender[10];
    char disease[50];
};

void addPatient();
void displayPatient();
void searchPatient();
void updatePatient();
void deletePatient();

int main()
{
    int choice;

    do
    {
        printf("\n====================================");
        printf("\n   MediCore (Text Mode)   ");
        printf("\n====================================");
        printf("\n1. Add Patient");
        printf("\n2. Display Patients");
        printf("\n3. Search Patient");
        printf("\n4. Update Patient");
        printf("\n5. Delete Patient");
        printf("\n6. Exit");

        printf("\n\nEnter Choice : ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addPatient();
                break;
            case 2:
                displayPatient();
                break;
            case 3:
                searchPatient();
                break;
            case 4:
                updatePatient();
                break;
            case 5:
                deletePatient();
                break;
            case 6:
                printf("\nThank You...");
                break;
            default:
                printf("\nInvalid Choice");
        }

    } while(choice != 6);

    return 0;
}


void addPatient()
{
    FILE *fp;
    struct Patient p;

   
    fp = fopen("patient.txt", "a");

    if(fp == NULL)
    {
        printf("\nFile Cannot Open...");
        return;
    }

    printf("\nEnter Patient ID : ");
    scanf("%d", &p.id);

    printf("Enter Name : ");
    scanf(" %[^\n]", p.name);

    printf("Enter Age : ");
    scanf("%d", &p.age);

    printf("Enter Gender : ");
    scanf("%s", p.gender);

    printf("Enter Disease : ");
    scanf(" %[^\n]", p.disease);

   
    fprintf(fp, "%d \"%s\" %d %s \"%s\"\n", p.id, p.name, p.age, p.gender, p.disease);

    fclose(fp); // ???? ??? ????

    printf("\nPatient Added Successfully...");
}


void displayPatient()
{
    FILE *fp;
    struct Patient p;

   
    fp = fopen("patient.txt", "r");

    if(fp == NULL)
    {
        printf("\nNo Records Found...");
        return;
    }

    printf("\n========== Patient Records ==========\n");

   
    while(fscanf(fp, "%d \"%[^\"]\" %d %s \"%[^\"]\"\n", &p.id, p.name, &p.age, p.gender, p.disease) != EOF)
    {
        printf("\nPatient ID : %d", p.id);
        printf("\nName       : %s", p.name);
        printf("\nAge        : %d", p.age);
        printf("\nGender     : %s", p.gender);
        printf("\nDisease    : %s", p.disease);
        printf("\n------------------------------------");
    }

    fclose(fp);
}


void searchPatient()
{
    FILE *fp;
    struct Patient p;
    int id, found = 0;

    fp = fopen("patient.txt", "r");

    if(fp == NULL)
    {
        printf("\nNo Records Found...");
        return;
    }

    printf("\nEnter Patient ID to Search: ");
    scanf("%d", &id);

   
    rewind(fp);

    while(fscanf(fp, "%d \"%[^\"]\" %d %s \"%[^\"]\"\n", &p.id, p.name, &p.age, p.gender, p.disease) != EOF)
    {
        if(p.id == id)
        {
            printf("\nPatient Found!");
            printf("\n-------------------------");
            printf("\nPatient ID : %d", p.id);
            printf("\nName       : %s", p.name);
            printf("\nAge        : %d", p.age);
            printf("\nGender     : %s", p.gender);
            printf("\nDisease    : %s", p.disease);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("\nPatient Not Found...");
    }

    fclose(fp);
}


void deletePatient()
{
    FILE *fp, *temp;
    struct Patient p;
    int id, found = 0;

    fp = fopen("patient.txt", "r");
    if(fp == NULL)
    {
        printf("\nFile Not Found...");
        return;
    }

    
    temp = fopen("temp.txt", "w");

    printf("\nEnter Patient ID to Delete : ");
    scanf("%d", &id);

    while(fscanf(fp, "%d \"%[^\"]\" %d %s \"%[^\"]\"\n", &p.id, p.name, &p.age, p.gender, p.disease) != EOF)
    {
        if(p.id == id)
        {
            found = 1; 
        }
        else
        {
            
            fprintf(temp, "%d \"%s\" %d %s \"%s\"\n", p.id, p.name, p.age, p.gender, p.disease);
        }
    }

    fclose(fp);
    fclose(temp);

    remove("patient.txt");             
    rename("temp.txt", "patient.txt"); 

    if(found)
        printf("\nPatient Deleted Successfully...");
    else
        printf("\nPatient Not Found...");
}


void updatePatient()
{
    FILE *fp;
    struct Patient p;
    int id, found = 0;
    long pos; 

    fp = fopen("patient.txt", "r+");

    if(fp == NULL)
    {
        printf("\nFile Not Found...");
        return;
    }

    printf("\nEnter Patient ID to Update : ");
    scanf("%d", &id);

    while(1)
    {
       
        pos = ftell(fp); 

        if(fscanf(fp, "%d \"%[^\"]\" %d %s \"%[^\"]\"\n", &p.id, p.name, &p.age, p.gender, p.disease) == EOF)
        {
            break; 
        }

        if(p.id == id)
        {
            printf("\nEnter New Name : ");
            scanf(" %[^\n]", p.name);

            printf("Enter New Age : ");
            scanf("%d", &p.age);

            printf("Enter New Gender : ");
            scanf("%s", p.gender);

            printf("Enter New Disease : ");
            scanf(" %[^\n]", p.disease);

            
            fseek(fp, pos, SEEK_SET);
            
            fprintf(fp, "%d \"%s\" %d %s \"%s\"\n", p.id, p.name, p.age, p.gender, p.disease);
            
            found = 1;
            printf("\nPatient Updated Successfully...");
            break;
        }
    }

    if(found == 0)
    {
        printf("\nPatient Not Found...");
    }

    fclose(fp);
}
