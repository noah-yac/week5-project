# week5-project

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
