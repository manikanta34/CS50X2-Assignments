/*

** Course      : CS 50X2 Accelerated Programming

** Author      : Manikanta Veeramalla

** Assignment  : 1

** Description : Program calculates the change for a point-of-sale machine and 
                 returns the correct number of bills and coins to be tendered as change.

** Date Due    :  01/22/2020

*****GRADING BELOW*****

** Readability          : /5
** Notes                :
** Syntax correctness   : /5
** Notes                :
** Solution to problem  : /5
** Notes                :
** Meets requirements   : /5
** Notes                :
** Total : /20

*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float totalCashPurchased,cashTendered,change;
    int twentyDollars,tenDollars,fiveDollars,oneDollars,quarter,dime,nickel,penny;
    cout << "Enter the total cost ($) " << endl;
    cin >> totalCashPurchased;
    cout << "Enter the cash tendered ($) " << endl;
    cin >> cashTendered;
    cout << "Your change:" << endl;
    change = cashTendered - totalCashPurchased;
    int changeInCents = (int)100 * change;
    
    twentyDollars = changeInCents / 2000;
    changeInCents = changeInCents % 2000;

    tenDollars = changeInCents / 1000;
    changeInCents = changeInCents % 1000;

    fiveDollars = changeInCents / 500;
    changeInCents = changeInCents % 500;

    oneDollars = changeInCents / 100;
    changeInCents = changeInCents % 100;

    quarter = changeInCents / 25;
    changeInCents = changeInCents % 25;

    dime = changeInCents / 10;
    changeInCents = changeInCents % 10;

    nickel = changeInCents / 5;
    changeInCents = changeInCents % 5;

    penny = changeInCents;

    cout << "$20 bills   : " << twentyDollars << endl;
    cout << "$10 bills   : " << tenDollars << endl;
    cout << "$5 bills    : " << fiveDollars << endl;
    cout << "$1 bills    : " << oneDollars << endl;
    cout << "quarters    : " << quarter << endl;
    cout << "dimes       : " << dime << endl;
    cout << "nickels     : " << nickel << endl;
    cout << "pennies     : " << penny << endl;

    return 0;
}