#include "header-area.h"
#include <iostream>

int main()
{
    int x = 0;
    int y = 0;

    std::cout << "What do you need?" << std::endl;
    std::cout << "1 - Figure's area; \n2 - Figure's perimeter" << std::endl << std::endl;
    std::cin >> y; std::cout << "\n" << std::endl;

    if (y)
    {
        if (y == 1) {
            std::cout << "1 - Rectangle; \n2 - Right Triangle; \n3 - Square; \n4 - Round;" << std::endl << std::endl;

            std::cin >> x; std::cout << "\n" << std::endl;

            if (x)
            {
                if (x == 1) {
                    double a;
                    double b;

                    std::cout << "Select your numbers please" << std::endl;
                    std::cout << "First number: "; std::cin >> a;
                    std::cout << "Second number: "; std::cin >> b; std::cout << "\n" << std::endl;

                    Rectangle rec(a, b);


                }

                else if (x == 2)
                {
                    double a;
                    double b;

                    std::cout << "Select your numbers please" << std::endl;
                    std::cout << "First number: "; std::cin >> a;
                    std::cout << "Second number: "; std::cin >> b; std::cout << "\n" << std::endl;

                    Triangle tri(a, b);
                }

                else if (x == 3)
                {
                    double a;

                    std::cout << "Select your number please" << std::endl;
                    std::cout << "First number: "; std::cin >> a; std::cout << "\n" << std::endl;

                    Square squ(a);
                }

                else if (x == 4)
                {
                    double a;

                    std::cout << "Select your number of radius please" << std::endl;
                    std::cout << "First number of radius: "; std::cin >> a; std::cout << "\n" << std::endl;

                    Circle squ(a);
                }

                else if (x != 1 && x != 2 && x != 3 && x != 4)
                {
                    std::cout << "You've written something wrong, try to restart program" << std::endl;
                }
            }
        }

        if (y == 2)
        {
            std::cout << "1 - Rectangle; \n2 - Right Triangle; \n3 - Square; \n4 - Round;" << std::endl << std::endl;

            std::cin >> x; std::cout << "\n" << std::endl;

            if (x)
            {
                if (x == 1) {
                    double a;
                    double b;

                    std::cout << "Select your numbers please" << std::endl;
                    std::cout << "First number: "; std::cin >> a; 
                    std::cout << "Second number: "; std::cin >> b; std::cout << "\n" << std::endl;

                    PerRectangle rec(a, b);


                }

                else if (x == 2) {
                    double a;
                    double b;
                    double c;

                    std::cout << "Select your numbers please" << std::endl;
                    std::cout << "First number: "; std::cin >> a; 
                    std::cout << "Second number: "; std::cin >> b; 
                    std::cout << "Third number: "; std::cin >> c; std::cout << "\n" << std::endl;


                    PerTriangle tri(a, b, c);
                }

                else if (x == 3) {
                    double a;

                    std::cout << "Select your number please" << std::endl;
                    std::cout << "First number: "; std::cin >> a; std::cout << "\n" << std::endl;

                    PerSquare squ(a);
                }

                else if (x == 4)
                {
                    double a;

                    std::cout << "Select your number of radius please" << std::endl;
                    std::cout << "First number of radius: "; std::cin >> a; std::cout << "\n" << std::endl;

                    Circle squ(a);
                }

                else if (x != 1 && x != 2 && x != 3 && x != 4) {
                    std::cout << "You've written something wrong, try to restart program" << std::endl;
                }
            }
        }

        else if (y != 2 && y != 1)
        {
            std::cout << "You've written something wrong, try to restart program" << std::endl;
        }
    }

    
}
