#include<stdio.h>
void main()
{
    int age;
    printf("Enter Your Age:");
    scanf("%d",&age);

    if(age>=18)
    {
        if(age>=21)
            printf("Adult");
        else {
		
            printf("Eligible to Vote");
       }
    }
    else {
	
        printf("Not Eligible");
    }
}
#include<stdio.h>
void main()
{
    int age;
    printf("Enter Your Age:");
    scanf("%d",&age);

if(age>=13)
{
    if(age>=20)
    { 
        printf("Adult");
	}
       
    else {
    	 printf("Teenager");
	}
       
}
else {
	 printf("Child");
}
}
   
