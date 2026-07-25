#include<stdio.h>
void main(){
	int no[4]={1,2,3,4};
	// 1 Addition of 0th and 1st index
	int add=no[0]+ no[1];
	printf("sum is =%d",add);
	
	//2 squre of 0th array index
	int square=no[0] * no[0];
	printf("\n square is =%d",square);
    //3 sum of array
	int a , sum=0;
	for( a=0;a<4;a++)
	{
		if(no[a]%2==0)
		{
			 sum=sum+no[a];
		}
	
	}
	printf("\n sum is =%d",sum);
	//4 check even numbers in array
	for( a=0;a<4;a++)
	{
		if(no[a]%2==0)
		{
		   	printf("\n even no is : %d",no[a]);
		}
			printf("\t");
	
	}
	//5 sum off even and odd numbers in array 
	int even_sum=0,odd_sum=0;
	for( a=0;a<4;a++)
	{
		if(no[a]%2==0)
		{
			 even_sum=even_sum+no[a];
		}
	    else{
	    	odd_sum=odd_sum+no[a];
		}
	}
		printf("\n even numbers sum is =%d",even_sum);
	   	printf("\n odd numbers sum is =%d",odd_sum);
	   	
	//6 square of full array
	
    int squre;
	for( a=0;a<4;a++)
	{
		
			squre=no[a]*no[a]; 
	    printf("\n squre is =%d",squre);
	}
	printf("\n");
	//7 star pattern with array 
	int b,c;
       for(a=0;a<4;a++)
          {
             b=no[a];

               for(c=1;c<=b;c++)
               {
                  printf("* ");
                }

              printf("\n");
           }
	
	
}
