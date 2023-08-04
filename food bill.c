#include<stdio.h>
main()
{
	int choice,quantity,amount,price;
	char another;
	do{
	
	printf("..........FOOD BILLING SYSTEM......\n");
	printf("1.pizza.........180rs\n");
	printf("2.burger........120rs\n");
	printf("3.dosa..........100rs\n");
	printf("4.idli..........50rs\n");
	
	printf("Enter your choice : \n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:printf("You have selected Pizza..\n");
		       price=180;
		       break;       
		case 2:printf("You have selected Burger..\n");
		       price=120;
		       break;
		case 3:printf("You have selected Dosa..\n");
		       price=100;
		       break;
		case 4:printf("You have selected Idli..\n");
		       price=50;
		       break;
	}
	 printf("Enter your Quantity : \n");
	 scanf("%d",&quantity);
	
	 amount=quantity *price;
	 printf("Amount : %d\n",amount);
	 
	 printf("Total amount is :%d\n",amount);
	 
	 printf("Do you have to place more order y / n?\n");
	 
	 another=getch(); 
	 
    }
    while(another== 'Y'||another =='y');
	
}


