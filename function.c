#include<stdio.h>

int hello(){
	printf("Hello Fun \n");
}
int add(){
	int a=12;
	int b=23;
	int c;
	c=a+b;
	printf("%d",c);
	printf("\n");
}
void star(){
	int a,b;
	for(a=1;a,a<=5;a++)
	{
		for(b=1;b<=a;b++)
		{
			printf(" * ");
		}
		printf("\n");
	}
}
void stars(){
	int a,b;
	for(a=5;a,a>=1;a--)
	{
		for(b=1;b<=a;b++)
		{
			printf(" * ");
		}
		printf("\n");
	}
}
// paramiterized function()
int addpara(int a, int b){
	printf("%d",a);
	printf("%d",b);
	int c=a+b;
	printf("%d",c);
	printf("\n");
}
int main()
{
//	int x,y;
//	printf("enter value of x is :");
//	scanf("%d",&x);
//	printf("enter value of y is :");
//	scanf("%d",&y);
	
	hello();
	add();
	star();
	stars();
	addpara(20,10);
}
