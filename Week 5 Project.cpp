/*
Noah Yacoub
11/21/2021
ITCS 2530
Week 5 - Project

Johnny Utah owns a surf shop on the beach called “Point Break Surf Shop”. Johnny sells surfboards in 3 three sizes: small (2 meters), medium (3 meters), and large (4 meters). The cost of one small surfboard is $175.00, one medium is $190.00, and one large is $200.00.  Write a program that will make the surf shop operational.  Your program should allow the user to do the following:

Buy any surfboard in any size and in any quanity.
At any time show the total number of surfboards of each size sold.
At any time show the total money made.
 Your program must consist of "int main()" and at least the following functions:

void ShowUsage();
a function to show the user how to use the program.
void MakePurchase(int& iTotalSmall, int& iTotalMedium, int& iTotalLarge);
a function to sell surfboards.
void DisplayPurchase(const int iTotalSmall, const int iTotalMedium, const int iTotalLarge);
 function to show the number of surfboards of each size sold.
void DisplayTotal(const int iTotalSmall, const int iTotalMedium, const int iTotalLarge);
a function to show the total amount of money made.

In your program you must define the functions as they are defined above. Do not change the signature (the name, parameters or the return value) or you will be marked down.

Your program should not use any global variables and the cost of the surfboards must be declared as named constants.
*/

#include <iostream>
//adds format manipulators
#include <iomanip>
//includes to_string()
#include <string>
//allows for transforming strings to uppercase easily
#include <algorithm>
//allows input file
#include <fstream>
using namespace std;

void ShowUsage();
void MakePurchase(int& iTotalSmall, int& iTotalMedium, int& iTotalLarge);
void DisplayPurchase(const int iTotalSmall, const int iTotalMedium, const int iTotalLarge);
void DisplayTotal(const int iTotalSmall, const int iTotalMedium, const int iTotalLarge);

int main()
{
    char char1 = '*';
    string title = "Welcome to my Johnny Utah's PointBreak Surf Shop";
    double linelength = 50;
    string selected = "";
    int spass = 0;
    int mpass = 0;
    int lpass = 0;
    const double sprice = 175.00;
    const double mprice = 190.00;
    const double lprice = 200.00;

    //line one (stream manipulator dependant)
    cout << setfill(char1) << left << setw(linelength);
    cout << char1 << '\n';
    //line two
    cout << setfill(char1) << right << setw(linelength-1) << title;
    cout << char1;
    //line three (stream manipulator dependant)
    cout << setfill(char1) << left << setw(linelength) << endl;
    cout << char1 << '\n' << '\n';

    ShowUsage();

    while (true) 
    {
        cout << '\n' << "Enter letter: ";
        cin >> selected;
        if (selected == "S" || selected == "s")
        {
            ShowUsage();
        }
        else if (selected == "Q" || selected == "q")
        {
            cout << "Exiting..." << endl;
            break;
        }
        else if (selected == "P" || selected == "p")
        {
            string purchasesize;
            int purchasecount;
            cout << "What size surfboard would you like (S/M/L): ";
            cin >> purchasesize;
            cout << "How many '" << purchasesize << "' sized surfboards would you like? (Enter a number >0):";
            cin >> purchasecount;


            if (purchasesize == "S" || purchasesize == "s")
            {
                for (int i = 0; i < purchasecount; i++)
                {
                    spass += 1;
                    MakePurchase(spass, mpass, lpass);
                }
            }
            else if (purchasesize == "M" || purchasesize == "m")
            {
                for (int i = 0; i < purchasecount; i++)
                {
                    mpass += 1;
                    MakePurchase(spass, mpass, lpass);
                }
            }
            else if (purchasesize == "L" || purchasesize == "l")
            {
                for (int i = 0; i < purchasecount; i++)
                {
                    lpass += 1;
                    MakePurchase(spass, mpass, lpass);
                }
            }
            else 
            {
                cout << "Error, type only (S/M/L)";
            }
        }
        else if (selected == "C" || selected == "c") 
        {
            DisplayPurchase(spass, mpass, lpass);
        }
        else if (selected == "T" || selected == "t")
        {
            DisplayPurchase(spass, mpass, lpass);
            DisplayTotal(spass * sprice, mpass * mprice, lpass * lprice);
        }
        else
        {
            cout << "Not valid input!";
        }
    }
    return 0;
}

void ShowUsage() 
{
    cout << "To purchase a surfboard 'P'" << endl;
    cout << "To display current purchases 'C'" << endl;
    cout << "To display total amount due 'T'" << endl;
    cout << "Show program usage options again (this list) 'S'" << endl;
    cout << "Quit 'Q'" << endl;
}

void MakePurchase(int& iTotalSmall, int& iTotalMedium, int& iTotalLarge)
{
    //debugging
    //cout << iTotalSmall;
    //cout << iTotalMedium;
    //cout << iTotalLarge;
    cout << "Purchase complete!" << endl;
}

void DisplayPurchase(const int iTotalSmall, const int iTotalMedium, const int iTotalLarge)
{
    //debugging
    //cout << iTotalSmall;
    //cout << iTotalMedium;
    //cout << iTotalLarge;
    if (iTotalSmall > 0) 
    {
        cout << "Purchasing " << iTotalSmall << " small surfboard(s)." << endl;
    }
    if (iTotalMedium > 0)
    {
        cout << "Purchasing " << iTotalMedium << " medium surfboard(s)." << endl;
    }
    if (iTotalLarge > 0) 
    {
        cout << "Purchasing " << iTotalLarge << " large surfboard(s)." << endl;
    }
    if (iTotalSmall == 0 && iTotalMedium == 0 && iTotalLarge == 0)
    {
        cout << "No purchases.";
    }
}

void DisplayTotal(const int iTotalSmall, const int iTotalMedium, const int iTotalLarge)
{
    int total = 0;
    total = iTotalSmall + iTotalMedium + iTotalLarge;

    cout << "Your ammount due is: $" << total << endl;
}