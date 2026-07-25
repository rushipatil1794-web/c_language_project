#include<stdio.h>
struct emp{
	int id ;
	int salary;
	char name[20];
};
void main(){
//	struct emp e2;
//	e1.id=102;
//	e2.id=103;
//	e1.salary=15000;
//	e2.salary=10000;
//	strcpy(e1.name,"rushi");
//	strcpy(e2.name,"rushikesh");
//	
//	printf("Id:%d",e1.id);
//	printf("\nId:%d",e2.id);
//	printf("\nSalary:%d",e1.salary);
//	printf("\nSalary:%d",e2.salary);
//	printf("\nName:%s",e1.name);
//	printf("\nName:%s",e2.name);
	
	printf("\n");
	struct emp s[5];
	int a;
	for(a=0;a<5;a++)
	{
	   printf("Enter Id:");
	   scanf("%d",&s[a].id);
	   printf("Enter Name:");
	   scanf("%s",&s[a].name);
	   printf("Enter Salary:");
	   scanf("%d",&s[a].salary);
	}
	printf("\n Employes Information:\n");
	for(a=0;a<5;a++)
	{
		printf("Id:%d,Name:%s,Salary:%d \n",s[a].id,s[a].name,s[a].salary);
	}
}
