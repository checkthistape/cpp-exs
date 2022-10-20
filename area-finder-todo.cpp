/*#include <iostream>

class Prostokat {
public:
    Prostokat(double bok1, double bok2) {
        _bok1 = bok1;
        _bok2 = bok2;
    }
public:
    void setBok1(double bok) {
        _bok1 = bok;
    }
    void setBok2(double bok) {
        _bok2 = bok;
    }
    double getBok1() {
        return _bok1;
    }
    double getBok2() {
        return _bok2;
    }
public:
    double pole() {
        return _bok1 * _bok2;
    }
    double obwod() {
        return (2 * _bok1) + (2 * _bok2);
    }
private:
    double _bok1;
    double _bok2;

};
int main() {
    Prostokat p1(10.10, 20.123);
    //p1.setBok1(10.10);
    //p1.setBok2(20.123);
    auto b1 = p1.getBok1();
    auto b2 = p1.getBok2();
    std::cout << "Pole o bokach " << b1 << " " << b2 << " wynosi " << p1.pole() << "\n";
    std::cout << "Obwod wynosi " << p1.obwod() << "\n";


}
*/

#include <iostream>

class Rectangle
{
public:
    Rectangle(double a, double b) {
        _one = a;
        _two = b;
        double oprc = _one * _two;
        std::cout << "Rectangle's formula: S = ab" << std::endl;  std::cout << "S of rectangle with numbers " << _one << " and " << _two << " = " << oprc << std::endl << std::endl;
    }
private:
    double _one=0;
    double _two=0;

};

class Triangle 
{
public:
    Triangle(double a, double b) {
        _one = a;
        _two = b;
        double oprc = 0.5*(_one * _two);
        std::cout << "Right triangle's formula: S = 1/2ab" << std::endl;  std::cout << "S of right triangle with numbers " << _one << " and " << _two << " = " << oprc << std::endl << std::endl;
    }
private:
    double _one = 0;
    double _two = 0;
};

class Square 
{
public:
    Square(double a) {
        _one = a;
        double oprc = _one*_one;
        std::cout << "Right triangle's formula: S = a^2" << std::endl;  std::cout << "S of square with number " << _one << " = " << oprc << std::endl << std::endl;
    }
private:
    double _one = 0;
};

int main()
{
    int x = 0;

    std::cout << "Choose an option:" << std::endl;
    std::cout << "1 - Rectangle; \n2 - Right Triangle; \n3 - Square;" << std::endl << std::endl;

    std::cin >> x; std::cout << "\n" << std::endl;
  

    if (x == 1) {
        double a;
        double b;

        std::cout << "Select your numbers please" << std::endl;
        std::cout << "First number: "; std::cin >> a;
        std::cout << "Second number: "; std::cin >> b; std::cout << "\n" << std::endl;

        Rectangle rec(a, b);
        

    }

    else if (x == 2) {
        double a;
        double b;

        std::cout << "Select your numbers please" << std::endl;
        std::cout << "First number: "; std::cin >> a;
        std::cout << "Second number: "; std::cin >> b; std::cout << "\n" << std::endl;

        Triangle tri(a, b);
    }

    else if (x == 3) {
        double a;

        std::cout << "Select your number please" << std::endl;
        std::cout << "First number: "; std::cin >> a; std::cout << "\n" << std::endl;

        Square squ(a);
    }
}
