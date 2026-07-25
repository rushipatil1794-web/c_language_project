#include<stdio.h>
int main()
{
    int ch;
     
    switch(ch)
    {
        case 1: printf("Tea"); break;
        case 2: printf("Coffee"); break;
        case 3: printf("Juice"); break;
        default: printf("Invalid");
    }
}
#include<stdio.h>
int main()
{
    int day;
    printf("Plese Enter Your Choice :");
    scanf("%d",&day);
    switch(day)
    {
        case 1: printf("Monday"); break;
        case 2: printf("Tuesday"); break;
        case 3: printf("Wednesday"); break;
        case 4: printf("Thursday"); break;
        case 5: printf("Friday"); break;
        default: printf("Invalid");
    }
}
#include<stdio.h>
int main()
{
    int month;
     printf("Enter Month Value:")
    scanf("%d",&month);
    switch(month)
    {
        case 1: printf("January"); break;
        case 2: printf("February"); break;
        case 3: printf("March"); break;
        default: printf("Invalid");
    }
}
#include<stdio.h>
int main()
{
    char ch;
       printf("Plese Enter Your Choice :");
       scanf("%d",&day);
    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("Vowel");
            break;

        default:
            printf("Consonant");
    }
}
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter Value Of A :");
    scanf("%d",&a);
    printf("Enter Value Of B :");
    scanf("%d",&b);
    printf("------ Menu -------");
    printf("1:Addition");
    printf("2:Division");
    printf("3:Multiplication");
    printf("4:subshtraction");
    switch(op)
    {
        case 1: printf("%d",a+b); break;
        case 2: printf("%d",a-b); break;
        case 3: printf("%d",a*b); break;
        case 4: printf("%d",a/b); break;
    }
}
