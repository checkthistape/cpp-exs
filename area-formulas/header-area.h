#pragma once
#include <iostream>

/*~~~~~~~~~~~~~~~area~~~~~~~~~~~~~~~~~~~*/

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
    double _one = 0;
    double _two = 0;

};

class Triangle
{
public:
    Triangle(double a, double b) {
        _one = a;
        _two = b;
        double oprc = 0.5 * (_one * _two);
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
        double oprc = _one * _one;
        std::cout << "Right triangle's formula: S = a^2" << std::endl;  std::cout << "S of square with number " << _one << " = " << oprc << std::endl << std::endl;
    }
private:
    double _one = 0;
};

class Circle {
public:
    Circle(double a) {
        _one = a;
        double oprc = 3.14159265358979323846264338 * _one;
        std::cout << "Circle's formula: S = pi*r^2" << std::endl;  std::cout << "S of square with number " << _one << " = " << oprc << std::endl << std::endl;
    }
private:
    double _one = 0;
};

/*~~~~~~~~~~~~~~~perimeter~~~~~~~~~~~~~~~~~~~*/

class PerRectangle
{
public:
    PerRectangle(double a, double b) {
        _one = a;
        _two = b;
        double oprc = 2*(_one * _two);
        std::cout << "Rectangle's formula: P = 2(a*b)" << std::endl;  std::cout << "P of rectangle with numbers " << _one << " and " << _two << " = " << oprc << std::endl << std::endl;
    }
private:
    double _one = 0;
    double _two = 0;

};

class PerTriangle
{
public:
    PerTriangle(double a, double b, double c) {
        _one = a;
        _two = b;
        _three = c;
        double oprc = _one + _two + _three;
        std::cout << "Right triangle's formula: P = a+b+c" << std::endl;  std::cout << "P of right triangle with numbers " << _one << " and " << _two << " and " << _three << " = " << oprc << std::endl << std::endl;
    }
private:
    double _one = 0;
    double _two = 0;
    double _three = 0;
};

class PerSquare
{
public:
    PerSquare(double a) {
        _one = a;
        double oprc = 4 * _one;
        std::cout << "Right triangle's formula: P = 4a" << std::endl;  std::cout << "P of square with number " << _one << " = " << oprc << std::endl << std::endl;
    }
private:
    double _one = 0;
};

class PerCircle {
public:
    PerCircle(double a) {
        _one = a;
        double oprc = 2*(3.14159265358979323846264338 * _one);
        std::cout << "Circle's formula: C = 2*(pi*r)" << std::endl;  std::cout << "C of square with number " << _one << " = " << oprc << std::endl << std::endl;
    }
private:
    double _one = 0;
};


