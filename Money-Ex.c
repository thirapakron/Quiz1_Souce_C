/*ถิรปกรณ์ สังขนานนท์  , MoneyExchange*/

#include<stdio.h>

void main(){
  
  system("cls");

  int a,b,c,d,e,total,choose_option,money;
    a = 0;
    b = 0;
    c = 0;
    d = 0;
    e = 0;
    total = 0; 
    money = 0;


   do{
        printf("Choose your option\n");
        printf("1.Coffee (35bath)\n2.Rice(150bath)\n3.Tea(135bath)\n4.Milk(45bath)\n5.Coke(25bath)\n0.Quit");
        scanf("Enter item of menu : %d",&choose_option);

        if(choose_option == 0)
            break;
        
        switch (choose_option)
        {
        case 1:
             printf("Enter of Quantity : ");
             scanf("%d", &a);
             total = total + (a * 35); 
            break;
       
        case 2:
             printf("Enter of Quantity : ");
             scanf("%d", &b);
             total = total + (b * 150); 
            break;
       
        case 3:
             printf("Enter of Quantity : ");
             scanf("%d", &c);
             total = total + (c * 35); 
            break;
        
        case 4:
             printf("Enter of Quantity : ");
             scanf("%d", &d);
             total = total + (d * 35); 
            break;
        
        case 5:
             printf("Enter of Quantity : ");
             scanf("%d", &e);
             total = total + (e * 35); 
            break;
        
        case 0:
            break;
        
        default:
            printf("Invalid Choose option\n");
            break;
        }
        printf("Total price : %d",&total);
        printf("Please paying(More than amount price) : ");
        scanf("%d",&money);
        if (total < money)
            printf("Sorry try again!");
        else 
            money = money - total;
            printf("Money for refund : %d",&money);
    }while(choose_option != 0);

        money=money/1000;
        printf("1000 bath: %d\n",money);
        money = money%1000;
        
        money=money/500;      
        printf("500 bath: %d\n",money);    
        money = (money%500);
        
        money=money/100;
        printf("100 bath: %d\n",money);    
        money = (money%100);
        
        money=money/50;
        printf("50 bath: %d\n",money);    
        money = (money%50);
        
        money=money/20;
        printf("20 bath: %d\n",money);    
        money = (money%20);
        
        money=money/10;
        printf("10 bath: %d\n",money);    
        money = (money%10);
        
        money=money/5;
        printf("5 bath: %d\n",money);    
        money = (money%5);
        
        money=money/2;
        printf("2 bath: %d\n",money);    
        money = (money%2);
        
        money=money/1;
        printf("1 bath: %d",money);    
        money = (money%1);

    return 0;
}