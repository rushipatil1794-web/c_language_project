#include <stdio.h>
#include <string.h>
#define GST 5
   struct Menu{
               int id;
			   char name[30];
			   float price;
			   };
    struct Order{
	             char name[30];
				 float price;
				 int qty;
				 float total;
				 };
   struct Menu menu[]={{1,"Coffee",80},{2,"Tea",40},{3,"Cold Coffee",120},{4,"Sandwich",150},{5,"Burger",180},{6,"Pizza",250},{7,"French Fries",100}};
   struct Order ord[100];
    int count=0;
    float subtotal=0;
    void displayMenu(){
	                   int i;
                       printf("\n===== CAFE MENU =====\n");
                      for(i=0;i<7;i++) 
					  {
					  	printf("%d. %-15s Rs. %.2f\n",menu[i].id,menu[i].name,menu[i].price);
					  }
					  
        printf("0. Print Bill & Exit\n");
    }
    void takeOrder(){
                     int ch,qty;
                      while(1){
                             displayMenu();
                             printf("Enter choice: "); scanf("%d",&ch);  
                             if(ch==0)
							 {
							 	break;
							  } 
                             if(ch<1||ch>7)
							 {
							 printf("Invalid!\n");
							 continue;
							 }
                    printf("Quantity: "); scanf("%d",&qty);
                    strcpy(ord[count].name,menu[ch-1].name);
                    ord[count].price=menu[ch-1].price;
                    ord[count].qty=qty;
                    ord[count].total=qty*menu[ch-1].price;
                    subtotal+=ord[count].total;
                    count++;
                    printf("Added!\n");
               }
   }
void printBill()
{
	int a;
    float gst=subtotal*GST/100,total=subtotal+gst;
     printf("\n\n=========== BILL ===========\n");
     printf("%-18s%-8s%-8s%-10s\n","Item","Price","Qty","Total");
    for( a=0;a<count;a++)
    {
     	printf("%-18s%-8.2f%-8d%-10.2f\n",ord[a].name,ord[a].price,ord[a].qty,ord[a].total);
        printf("----------------------------\n");
        printf("Subtotal : %.2f\n",subtotal);
        printf("GST(5%%)  : %.2f\n",gst);
        printf("Total    : %.2f\n",total);
        printf("Thank You! Visit Again.\n");
	}

}
int main(){
printf("Welcome to Cafe Billing System\n");
takeOrder();
printBill();
return 0;
}
