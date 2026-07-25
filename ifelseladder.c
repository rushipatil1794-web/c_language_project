#include<stdio.h>
int main()
{
    int sub1,sub2,sub3,sub4,total,per;
       printf("Enter Marks Of Subject 1 :");
       scanf("%d",&sub1);
      printf("Enter Marks Of Subject 2 :");
       scanf("%d",&sub2);
      printf("Enter Marks Of Subject 3 :");
       scanf("%d",&sub3);
      printf("Enter Marks Of Subject 4 :");
       scanf("%d",&sub4);
       total=sub1+sub2+sub3+sub4;
       per=total/4;
       printf("Total Marks Is :%d \n",+total);
       printf("Total Percentage Is :%d \n",+per);

    if(per>=90)
        printf("A Grade");
    else if(per>=75)
        printf("B Grade");
    else if(per>=50)
        printf("C Grade");
    else
        printf("Fail");
}
#include<stdio.h>
int main()
{
    int a,b,c;
     printf("Enter Value Of A :");
     scanf("%d",&a);
     printf("Enter Value Of B :");
     scanf("%d",&b);
     printf("Enter Value Of C :");
     scanf("%d",&c);
    if(a>b && a>c)
        printf("A is Largest");
    else if(b>a && b>c)
        printf("B is Largest");
    else
        printf("C is Largest");
}
#include<stdio.h>
int main()
{
    int month;
    printf("Enter Month Value:")
    scanf("%d",&month);
    if(month==1)
        printf("January");
    else if(month==2)
        printf("February");
    else if(month==3)
        printf("March");
    else if(month==4)
        printf("April");
    else if(month==5)
        printf("May");
    else if(month==6)
        printf("June");
    else if(month==7)
        printf("July");
    else if(month==8)
        printf("August");
    else if(month==9)
        printf("September");
    else if(month==10)
        printf("October");
    else if(month==11)
        printf("November");
    else if(month==12)
        printf("December");
    else
        printf("Invalid Month");
}
#include<stdio.h>
int main()
{
    int age;
     printf("Enter Your Age :");
     scanf("%d",&age)
    if(age<13)
        printf("Child");
    else if(age<20)
        printf("Teenager");
    else
        printf("Adult");
}
#include<stdio.h>
int main()
{
    int unit=150;

    if(unit<=100)
        printf("Low Bill");
    else if(unit<=200)
        printf("Medium Bill");
    else
        printf("High Bill");
}
