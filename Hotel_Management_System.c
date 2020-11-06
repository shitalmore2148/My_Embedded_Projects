#include<stdio.h>
void display_menu()
{
	int i;
	printf("**********************WELCOME TO GANDHARVA**********************\n");
	printf("menu card..\n1.hot beverage 2.cold beverage 3.juice 4.sandwitch 5.snacks\n");
	printf("6.papad 7.chinese soup 8.chinese starter 9.tandoor starter  10.chef special\n");
	printf("11.chinese main coourse 12.roti 13.rice  14.dessert  15.mocktail");
	printf("items\t\t\tcost\n\n");
	int cost1[38]={20,25,40,40,25,20,60,60,60,45,60,70,80,70,80,110,120,140,130,140,150,210,180,180,110,120,150,12,20,25,130,140,150,90,110,110,100,120};
	
		char menu[200][38]={"tea               ","coffee             ","hot chocolate      ","lassi              ","masala buttermilk  ","mineral water      ","watermelon         ","sweet lime         ","pineapple juice    ","veg sandwitch      ","cheese sandwicth   ","grilled sandwitch  ","cream of tomato soup","veg clear soup     ","hot and sour soup  ","vg manchurian      ","crispy veg         ","paneer chilly         ","veg hariyali kabab ","veg seekh          ","paneer tikka       ","special veg        ","paneer pasanda     ","paneer lachhedar   ","veg fried rice      ","schejwan fried rice","hakka noodles      ","roti                ","butter naan        ","garlic naan        ","jeera rice         ","green peas         ","veg pulav          ","fruit salad         ","fruit salad + ice cream","pina colada        ","pink panther       ","special fruit punch"};
		for(i=0;i<38;i++)
		{
			printf("%s\t%d",menu[i],cost1[i]);
			printf("\n");
		}

}
int main()
{
	
	int b1=0,b2=0,b3=0,b4=0,b5=0,b6=0,b7=0,b8=0,b9=0,b10=0,b11=0,b12=0,b13=0;
	int n,c,f,d,bill,cost,quantity;
	char m=1;
	//char i[3];
	int i;
	display_menu();
	
	//printf("**********************WELCOME TO GANDHARVA**********************\n");
	//printf("menu card..\n1.hot beverage\n2.cold beverage\n3.juice\n4.sandwitch\n5.snacks\n6.papad\n7.chinese soup\n8.chinese starter\n9.tandoor starter\n10.chef special\n11.chinese main coourse\n12.roti\n13.rice\n14.dessert\n15.mocktail\n");

	/*	printf("hot beverage\n");
	printf("1.tea cost 20\n2.cofeecost 25\n3.hot chocolate cost 40\n");
	printf("cold beverage\n");
	printf("1.Lassi cost 40\n2.buttermilk masala cost 25\n3.mineral water cost 20\n");
	printf("fresh juice\n");
	printf("1.water melon cost 60\n2.sweet lime cost 60\n3.orange/pineappe juice cost 60\n");
	printf("sandwitches\n");
	printf("1.veg sandwitch cost 45\n2.cheese sandwitch cost 60\n3.veg grilled sandwitch cost 70\n");
	printf("chiense soup\n");
	printf("1.cream of tomato soup cost 80\n2.veg clear soup cost 70\n3.hot and sour soup cost 80\n");
	printf("chinese starter\n");
	printf("1.vg anchurian\n2.crispy veg cost 120\n3.paneer chilly cost 140\n");
	printf("tandoor starter\n");
	printf("1.veg hariyali kabab cost 130\n2.veg seekh  cost 140\n3.paneer tikka cost 150\n");
	printf("chef special\n");
	printf("1.special veg cost 210\n2.paneer pasanda  cost 180\n3.paneer lachhedar cost 160\n");
	printf("chinese main course\n");
	printf("1.veg fried rice cost 110\n2.schejwan fried rice  cost 120\n3.hakka noodles cost 110\n");
	printf("indian breads\n");
	printf("1.roti cost 12\n2.butter naan cost 20\n3.garlic naan cost 25\n");
	printf("Rice\n");
	printf("1.jeera rice cost 130\n2.green peas rice cost 140\n3.veg pulav cost 150\n");
	printf("Desserts\n");
	printf("1.Fruit salad cost 90\n2.fruit salad with ice cream cost 110\n3.vanilla ice cream cost 110\n");
	printf("mocktail\n");
	printf("1.pina colada cost 100\n2.pink panther  cost 120\n3.special fruit punch  cost 120\n");
	*/
	printf("enter the number of items you want?\n");
	scanf("%d",&n);
	for(f=1;f<=n;f++)
	{
		printf("\nwhat you want to eat today?\n");
		
		scanf("%d",&c);
		switch(c)
		{
			case 1: 
			printf("hot beverage\n");
			printf("1.tea cost 20\n2.cofeecost 25\n3.hot chocolate cost 40\n");
			scanf("%d",&d);
			switch(d)
			{
				case 1:
					cost=20;
					printf("enter quantity\n");
					scanf("%d",&quantity);
					b1=cost*quantity;
					printf("tea %d",b1);
					break;
				case 2:
					cost=25;
					printf("enter quantity\n");
					scanf("%d",&quantity);
					b1=cost*quantity;
					printf("coffee %d",b1);
					break;
				case 3:
					cost=40;
					printf("enter quantity\n");
					scanf("%d",&quantity);
					b1=cost*quantity;
					printf("hot chocolate %d",b1);
					break;
				default:
					printf("enter valid choice");	
			}
			break;
			
			case 2: 
			printf("cold beverage\n");
			printf("1.Lassi cost 40\n2.buttermilk masala cost 25\n3.mineral water cost 20\n");
			scanf("%d",&d);
			switch(d)
			{
				case 1:
					cost=40;
					printf("enter quantity\n");
					scanf("%d",&quantity);
					b2=cost*quantity;
					printf("lassi %d %d",quantity,b2);
					break;
				case 2:
					cost=25;
					printf("enter quantity\n");
					scanf("%d",&quantity);
					b2=cost*quantity;
					printf("masala butermilk %d,%d",quantity,b2);
					break;
				case 3:
					cost=20;
					printf("enter quantity\n");
					scanf("%d",&quantity);
					b2=cost*quantity;
					printf("mineral water %d %d",quantity,b2);
					break;
				default:
					printf("enter valid choice");	
			}
			break;
			
			case 3: 
			printf("juice\n");
			printf("1.water melon cost 60\n2.sweet lime cost 60\n3.pineapple cost 60\n");
			scanf("%d",&d);
			switch(d)
			{
				case 1:
					cost=60;
					printf("enter quantity\n");
					scanf("%d",&quantity);
					b3=cost*quantity;
					printf("water melon %d,%d",quantity,b3);
					break;
				case 2:
					cost=60;
					printf("enter quantity\n");
					scanf("%d",&quantity);
					b3=cost*quantity;
					printf("sweet lime %d,%d",quantity,b3);
					break;
				case 3:
					cost=60;
					printf("enter quantity\n");
					scanf("%d",&quantity);
					b3=cost*quantity;
					printf("pinapple %d,%d",quantity,b3);
					break;
				default:
					printf("enter valid choice");	
			}
			break;
			
			case 4: 
			printf("sandwitches\n");
			printf("1.veg sandwitch cost 45\n2.cheese sandwitch cost 60\n3.beg grilled sandwitch cost 70\n");
			scanf("%d",&d);
			switch(d)
			{
				case 1:
					cost=45;
					printf("enter quantity\n");
					scanf("%d",&quantity);
					b4=cost*quantity;
					printf("veg sanditch %d %d",quantity,b4);
					break;
				case 2:
					cost=60;
					printf("enter quantity\n");
					scanf("%d",&quantity);
					b4=cost*quantity;
					printf("cheese sandwitch %d %d",quantity,b4);
					break;
				case 3:
					cost=70;
					printf("enter quantity\n");
					scanf("%d",&quantity);
					b4=cost*quantity;
					printf("veg grilled %d %d",quantity,b4);
					break;
				default:
					printf("enter valid choice");	
			}
			break;
			
			case 5: 
			printf("chinese soup\n");
			printf("1.cream of tomato soup cost 80\n2.veg clear soup ost 70\n3.hot and sour soup cost 80\n");
			scanf("%d",&d);
			switch(d)
			{
				case 1:
					cost=80;
					printf("enter quantity\n");
					scanf("%d",&quantity);
					b5=cost*quantity;
					printf("cream of tomato soup %d %d",quantity,b5);
					break;
				case 2:
					cost=70;
					printf("enter quantity\n");
					scanf("%d",&quantity);
					b5=cost*quantity;
					printf("veg clear soup %d  %d",quantity,b5);
					break;
				case 3:
					cost=80;
					printf("enter quantity\n");
					scanf("%d",&quantity);
					b5=cost*quantity;
					printf("hot and sour soup %d %d",quantity,b5);
					break;
				default:
					printf("enter valid choice");	
			}
			break;
			
			case 6: 
			printf("chinese starter\n");
			printf("1.veg manchurian cost 110\n2.crispy veg cost 120\n3.paneer chilly cost 140\n");
			scanf("%d",&d);
			switch(d)
			{
				case 1:
					cost=110;
					printf("enter quantity\n");
					scanf("%d",&quantity);
					b6=cost*quantity;
					printf("veg manchurian %d %d",quantity,b6);
					break;
				case 2:
					cost=120;
					printf("enter quantity\n");
					scanf("%d",&quantity);
					b6=cost*quantity;
					printf("crispy veg %d %d",quantity,b6);
					break;
				case 3:
					cost=140;
					printf("enter quantity\n");
					scanf("%d",&quantity);
					b6=cost*quantity;
					printf("pnaeer chilly %d,%d",quantity,b6);
					break;
				default:
					printf("enter valid choice");	
			}
			break;
			
			case 7: 
			printf("tandoor starter\n");
			printf("1.veg hariyali kabab cost 130\n2.veg seekh cost 140\n3.paneer tikka cost 150\n");
			scanf("%d",&d);
			switch(d)
			{
				case 1:
					cost=130;
					printf("enter quantity\n");
					scanf("%d",&quantity);
					b7=cost*quantity;
					printf("veg hariyali kabab %d,%d",quantity,b7);
					break;
				case 2:
					cost=140;
					printf("enter quantity\n");
					scanf("%d",&quantity);
					b7=cost*quantity;
					printf("veg seekh %d %d",quantity,b7);
					break;
				case 3:
					cost=150;
					printf("enter quantity\n");
					scanf("%d",&quantity);
					b7=cost*quantity;
					printf("paneer tikka %d %d",quantity,b7);
					break;
				default:
					printf("enter valid choice");	
			}
			break;
			
			case 8: 
			printf("chef special\n");
			printf("1.special veg cost 210\n2.paneer pasanda cost 180\n3.shahi paneer cost 180\n");
			scanf("%d",&d);
			switch(d)
			{
				case 1:
					cost=210;
					printf("enter quantity\n");
					scanf("%d",&quantity);
					b8=cost*quantity;
					printf("special veg %d,%d",quantity,b8);
					break;
				case 2:
					cost=180;
					printf("enter quantity\n");
					scanf("%d",&quantity);
					b8=cost*quantity;
					printf("pneer pasanda %d %d",b8);
					break;
				case 3:
					cost=180;
					printf("enter quantity\n");
					scanf("%d",&quantity);
					b8=cost*quantity;
					printf("shahi paneer %d",b8);
					break;
				default:
					printf("enter valid choice");	
			}
			break;
			
			case 9: 
			printf("chinese main course\n");
			printf("1.veg fried rice cost 110\n2.schejwan fried rice cost 120\n3.hakka noodles cost 110\n");
			scanf("%d",&d);
			switch(d)
			{
				case 1:
					cost=110;
					printf("enter quantity\n");
					scanf("%d",&quantity);
					b9=cost*quantity;
					printf("veg fried rice %d %d",quantity,b9);
					break;
				case 2:
					cost=120;
					printf("enter quantity\n");
					scanf("%d",&quantity);
					b9=cost*quantity;
					printf("schejwan rice %d %d",b9);
					break;
				case 3:
					cost=110;
					printf("enter quantity\n");
					scanf("%d",&quantity);
					b1=cost*quantity;
					printf("hakka noodles %d %d",quantity,b1);
					break;
				default:
					printf("enter valid choice");	
			}
			break;
			
			case 10: 
			printf("indian breads\n");
			printf("1.roti cost 12\n2.butter naan cost 20\n3.garlic naan cost 25\n");
			scanf("%d",&d);
			switch(d)
			{
				case 1:
					cost=12;
					printf("enter quantity\n");
					scanf("%d",&quantity);
					b10=cost*quantity;
					printf("roti %d %d",b10);
					break;
				case 2:
					cost=20;
					printf("enter quantity\n");
					scanf("%d",&quantity);
					b10=cost*quantity;
					printf("butter naan %d %d",quantity,b10);
					break;
				case 3:
					cost=25;
					printf("enter quantity\n");
					scanf("%d",&quantity);
					b10=cost*quantity;
					printf("garlic naan %d %d",quantity,b1);
					break;
				default:
					printf("enter valid choice");	
			}
			break;
			
			case 11: 
			printf("Rice\n");
			printf("1.jeera rice cost 130\n2.green peas cost 140\n3.veg pulav cost 150\n");
			scanf("%d",&d);
			switch(d)
			{
				case 1:
					cost=130;
					printf("enter quantity\n");
					scanf("%d",&quantity);
					b11=cost*quantity;
					printf("jeera rice %d %d",quantity,b11);
					break;
				case 2:
					cost=140;
					printf("enter quantity\n");
					scanf("%d",&quantity);
					b11=cost*quantity;
					printf("green peas %d %d",quantity,b1);
					break;
				case 3:
					cost=150;
					printf("enter quantity\n");
					scanf("%d",&quantity);
					b11=cost*quantity;
					printf("veg pulav %d %d",quantity,b11);
					break;
				default:
					printf("enter valid choice");	
			}
			break;
			
			case 12: 
				printf("Desserts\n");
				printf("1.Fruit salad cost 90\n2.fruit salad with ice cream cost 110\n3.vanilla ice cream cost 110\n");
				scanf("%d",&d);
			switch(d)
			{
				case 1:
					cost=90;
					printf("enter quantity\n");
					scanf("%d",&quantity);
					b12=cost*quantity;
					printf("fruit salad %d %d",quantity,b12);
					break;
				case 2:
					cost=110;
					printf("enter quantity\n");
					scanf("%d",&quantity);
					b12=cost*quantity;
					printf("fruit salad with ice cream %d %d",b12);
					break;
				case 3:
					cost=110;
					printf("enter quantity\n");
					scanf("%d",&quantity);
					b12=cost*quantity;
					printf("vanilla ice cream %d %d\n",quantity,b12);
					break;
				default:
					printf("enter valid choice");	
			}
			break;
			
			case 13: 
			printf("mocktail\n");
			printf("1.pina colada cost 100\n2.pink panter cost  110\n3.special fruit punch cost 120\n");
			scanf("%d",&d);
			switch(d)
			{
				case 1:
					cost=100;
					printf("enter quantity\n");
					scanf("%d",&quantity);
					b13=cost*quantity;
					printf("pina colada %d %d",quantity,b13);
					break;
				case 2:
					cost=110;
					printf("enter quantity\n");
					scanf("%d",&quantity);
					b13=cost*quantity;
					printf("pink panther %d %d",quantity,b13);
					break;
				case 3:
					cost=120;
					printf("enter quantity\n");
					scanf("%d",&quantity);
					b13=cost*quantity;
					printf("special fruit punch %d %d",quantity,b13);
					break;
				default:
					printf("enter valid choice");	
					break;
			}
			break;
			
			
		}
		
		
	}
	printf("\nyou ordered %d items and your bill is %d",n,b1+b2+b3+b4+b5+b6+b7+b8+b9+b10+b11+b12+b13);
	printf("\nplease visit again %c",m);
	
	
	
	return 0;
}
