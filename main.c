#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// #include <conio.h>
 
 
void menu();
float lemon();
float orange();
float total();
float totaldinein();
float totaltakeout();
void  login();
 
 
int x,r,t;
float L, O, f;
float total1;
 
int main()
{
    printf("Welcome to Prime Lemom and Orange Stores\n" );
    printf("----------------------------------------\n");
    menu();

}
 
void menu()  //This functions is for selecting the items from the menu list.
{   
     
    int x;
 
    //Menu
    printf("No. Item    Price   Variants\n");
    printf("1   Lemon   $8.00   1 Big\n");
    printf("                    1 Medium\n");
    printf("                    1 Seed\n\n"); 
    printf("2   Orange  $5.00   1 Big\n");
    printf("                    1 Medium\n");
    printf("                    1 Seed\n\n");
       
    printf("--------------------------------\n");

    printf("3   Display Total \n\n");
    printf("4   Quit Program\n");
 
    printf("Please Select Your Option from Above Menu : ");
    scanf("%d",&x);
 
     
      
    switch(x)
    {
    case 1: lemon();
            break;
     
    case 2: orange();
            break;
 
    case 3: total();
            break;
 
    case 4: exit(0);
     
    default: printf("Wrong Input\n");
            menu();
              
    }
 
}


 
float lemon()
{
    
    printf("You have selected Lemon");
    printf("\nPlease Enter your Quantity: ");
    scanf("%d",&x);
 
    L=x*8.00;
     
    printf("Do you want to add-on? (1-Yes, 2-No): ");
    scanf("%d",&r);
 
    if (r==1)
    {   system("cls"); //clear screen.
        {menu();}
    }
 
    else
    {total();}
 
         
}
 
float orange()
{
 
    printf("You have selected Orange");
    printf("\nPlease Enter your Quantity :");
    scanf("%d",&x);
 
    O = x*5.00;
 
    printf("Do you want to add-on?(1-Yes, 2-No)");
    scanf("%d",&r);
     
    if (r==1)
    {   system("cls");                                  
        {menu();}
    }
    else 
    {total();}

}

void finishTransaction(float total){
    printf("---------------------------------------\n");
    printf("Enter amount to pay, 0 if on credit: ");
    scanf("%f",&f);
    printf("---------------------------------------\n");
    printf("Preparing reciept\n");
    printf("Total Amount: %f\n", total);
    printf("Amount Paid: %f\n", f);
    printf("Balance: %f\n", (total-f));
    ((total-f) < 0)? 
        printf("Overpayment of %f\n", (f-total)):
            printf("Status: %s\n", ((total - f) == 0)? 
                "Paid in full": (f == 0)? 
                "Bought on credit" : 
                "Paid in part");
    printf("----------------------------------------\n");
    printf("Thank your for Patronizing us");

}

float total ()  //This function is to calculate the total price of lemon and orange including 5% of government taxes
 
{
    system("cls");
    printf("Select your payment method:\n1--> Cash Payment     \n2--> Credit Card Payment\n");
    scanf("%d",&t);

 
    switch (t)
    {
    case 1: total1 += (L + O)*1.15;  //Calculation for grand total with government taxes,and cash payment.
 
            printf("\nThe Total is $%.2f\n",total1);
     finishTransaction(total1);

            break;
     
    case 2: total1 += (L + O)*1.18;   //Calculation for grand total with government taxes,and credit card payment.
 
            printf("\nThe Total is $%.2f\n",total1);
      finishTransaction(total1);

            break;
     
    default: system("cls");
             printf("\nInvalid  Error");
    
    }	
	
}
