#include <ncurses.h> //<ncurses.h> -lncurses
#include <iostream>
#include <stdlib.h>
#include <math.h>

#include "func.h"

using namespace std;

float x, y;
unsigned int b;
char c;

int main()
{
    while (1)
    {
        system("clear"); //system("clear");
        
        puts("1. + Addition");
        puts("2. - Subtraction");
        puts("3. * Multiplication");
        puts("4. / Division");
        puts("5. ! Factorial");
        puts("6. ^ Exponentiation");
        puts("0. EXIT");

        c = getch();

        system("clear"); //system("clear");

        if ((c == '1') || (c == '2') || (c == '3') || (c == '4') || (c == '6'))
        {
            cout << "Enter first number : ";
            cin >> x;
            cout << "Enter second number : ";
            cin >> y;
        }
        
        switch (c)
        {
            case '1': cout << Addition(x, y) << endl; getch(); break;
            case '2': cout << Subtraction(x, y) << endl; getch(); break;
            case '3': cout << Multiplication(x, y) << endl; getch(); break;
            case '4': cout << Division(x, y) << endl; getch(); break;
            case '5': cout << body_of_Factorial() << endl; getch(); break;
            case '6': cout << Exponentiation(x, y) << endl; getch(); break;
            case '0': return 0;
            default : puts("WRONG MODE"); getch();
        }
    }
}
