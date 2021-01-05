//Cashier
//This  program  returns the minimum number of coins possible for the change owed

#include<stdio.h>
#include<math.h>

int main(void)
{
    float dollars;
    int cents = 0;
    int quarters = 25, dimes = 10, nickels = 5, pennies = 1;
    int coins = 0;

    //Prompts the user for the non negative input
    do
    {
        printf("Change owed:");
        scanf("%f", &dollars);
    }
    while (dollars < 0);

    //convert dollars to cents
    cents = round (dollars * 100);

    while (cents >= quarters )
    {
        cents = cents - quarters;
        coins ++ ;
    }

     while (cents >= dimes )
    {
        cents = cents - dimes;
        coins ++ ;
    }

     while (cents >= nickels )
    {
        cents = cents - nickels;
        coins ++ ;
    }

     while (cents >= pennies )
    {
        cents = cents - pennies;
        coins ++ ;
    }

    //print the no. of coins
     printf("%i coins\n", coins);  

     return 0;

}

