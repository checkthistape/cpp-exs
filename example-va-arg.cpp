#include <iostream>
#include <stdio.h>
#include <stdarg.h>
#include <math.h>

double stddev(int count, ...)
{
    double sum = 0;
    double sum_sq = 0;
    va_list args;
    va_start(args, count);
    for (int i = 0; i < count; ++i) {
        double num = va_arg(args, double);
        sum += num;
        sum_sq += num * num;
    }
    va_end(args);
    return sqrt(sum_sq / count - (sum / count) * (sum / count));
}

int main(void)
{
    std::cout << stddev(8, 25.0, 26.9, 9, 100, 283.98, 206, 132.999, 10293.9, 57) << std::endl;
}
