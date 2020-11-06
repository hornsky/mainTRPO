#include <ncurses.h> //<ncurses.h> -lncurses
#include <iostream>
#include <stdlib.h>

#include "func.cpp"

using namespace std;

float x, y;
char c;

float Addition();
float Subtraction();
float Multiplication();
float Division();

int main()
{
    while (1)
    {
        system("clear"); //system("clear");
        
        puts("1. + Addition");
        puts("2. - Subtraction");
        puts("3. * Multiplication");
        puts("4. / Division");
        puts("0. EXIT");

        c = getch();

        if (c == 0)
            return 0;

        system("clear"); //system("clear");

        cout <<"Enter first number : ";
        cin >> x;
        cout <<"Enter second number : ";
        cin >> y;
        
        switch (c)
        {
            case '1': cout << Addition(x,y) << endl; getch(); break;
            case '2': cout << Subtraction(x,y) << endl; getch(); break;
            case '3': cout << Multiplication(x,y) << endl; getch(); break;
            case '4': cout << Division(x,y) << endl; getch(); break;
            default : puts("WRONG MODE"); getch();
        }
    }
}
