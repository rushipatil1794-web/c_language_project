#include<stdio.h>
void main (){
	int no [3][3][4]={ {{12,13,14,15},{11,12,13,14},{15,26,37,48}},
	{{99,98,97,96},{67,68,69,65},{61,62,63,64}},
	{{41,42,43,44},{23,24,25,26},{32,33,34,35}}};
	
	int a,b,c,even_sum=0;
	int odd_sum=0;
	int count_even=0;
	int count_odd=0;
	
	for(a=0;a<3;a++)
	{
		for(b=0;b<3;b++)
		{
			for(c=0;c<4;c++)
			{
			//	printf("%d ",no[a][b][c]);
				if(no[a][b][c]%2==0)
				{
					printf("%d ",no[a][b][c]);
					even_sum=even_sum+no[a][b][c];
					count_even++;
					
				}
				else{
				    	printf("%d ",no[a][b][c]);
				     	odd_sum=odd_sum+no[a][b][c];
					    count_odd++;
					
			      	}
				
			}
			printf("\n");
		}
		printf("\n");
		
	}
	printf("\nsum of even is = %d",even_sum);
	printf("\nsum of odd is = %d",odd_sum);
	printf("\nCount of even is = %d",count_even);
	printf("\nCount of odd is = %d",count_odd);
//	printf("\t");
}
