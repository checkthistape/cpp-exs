#include <iostream>
#include <cmath>

class Calc {
public:
    void setNumbers(double firstNumb, double secondNumb, double thirdNumb, double fourthNumb) {
        _firstNumb = firstNumb;
        _secondNumb = secondNumb;
        _thirdNumb = thirdNumb;
        _fourthNumb = fourthNumb;
    }
    double getPlus() {
        return _firstNumb + _secondNumb + _thirdNumb + _fourthNumb;
     }
    double getMinus() {
        return _firstNumb - _secondNumb - _thirdNumb - _fourthNumb;
    }

private:
    double _firstNumb;
    double _secondNumb;
    double _thirdNumb;
    double _fourthNumb;

};
int main()
{
    int k = 0;

    double x;
    double y;
    double z;
    double o;

    std::cout << "Choose your numbers: ";
    std::cin >> x; std::cout;
    std::cin >> y; std::cout;
    std::cin >> z; std::cout;
    std::cin >> o; std::cout;

    std::cout << "Choose an action: \n 1-Minus \t 2-plus" << std::endl;


    
    Calc calculator;
    calculator.setNumbers(x, y, z, o);


    std::cout << calculator.getPlus();

    switch (k) {
    case 1:
        std::cout << calculator.getPlus();
    break;

    case 2:
        std::cout << calculator.getMinus();
    break;

    default:
        std::cout << "You didn't choose an action" << std::endl;
    break;
    }
}

