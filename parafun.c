#include<stdio.h>
int add(int a, int b){
	printf("%d\n",a);
	printf("%d\n",b);
	int c=a+b;
	printf("%d",c);
	printf("\n");
}
int sub(int a, int b){

	int c=a-b;
	printf("%d",c);
	printf("\n");
}
int multi(int a, int b){
	
	int c=a*b;
	printf("%d",c);
	printf("\n");
}
int div(int a, int b){

	int c=a/b;
	printf("%d",c);
	printf("\n");
}
int main()
{
	int x,y,ch;
    printf("calculator \n");
	printf("1:add \n");
	printf("2:sub \n");
	printf("3:multi \n");
	printf("4:div \n");
	printf("enter your value of x: \n");
	scanf("%d",&x);
	printf("enter your value of y: \n");
	scanf("%d",&y);
	printf("enter your choice :\n");	
	scanf("%d", &ch);
	switch (ch)
	{
		case 1:
            printf("You selected Addition \n");
            add(x,y);
            break;

        case 2:
            printf("You selected Subtraction \n");
            sub(x,y);
            break;

        case 3:
            printf("You selected Multiplication \n");
            multi(x,y);
            break;

        case 4:
            printf("You selected Division \n");
            div(x,y);
            break;

        default:
            printf("Invalid Choice");
	}
}
