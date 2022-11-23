#include "header.h"
#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';

    cout << "Calculator Console Application" << endl << endl;
    cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b" << endl;

    Calculator c;
    while (true)
    {

        cin >> x >> oper >> y;
        try {
            if (oper == '/' && y == 0)
            {
                int ErrorNumb = 0;
                throw 0;
                continue;
            }

            else
            {
                result = c.Calculate(x, oper, y);
            }
            cout << "Result is: " << result << endl;
        }
        catch (int ErrorNumb) {
            cout << "Error " << ErrorNumb << ": Division by zero" << endl;
        }
    }


        return 0;
    
}
