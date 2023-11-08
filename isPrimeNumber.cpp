#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

// Zadanie 1 https://www.iws.edu.pl/cpp/matura/CPSF/C_2016_PSF_0
bool isPrimeNumber(int n) {
    float pN = sqrt(n);
    int iterator=0;
    for (int j = 1; j <= pN; j++) {
        
        if (n % j == 0) { iterator++; }
        
    }
    
    if (iterator == 1) { std::cout << "\n " << n; return true; }
    else { return false; }
}

int main()
{
    std::fstream f("dane_6.txt");
    std::string data;
    int n = 0;
    int it = 0;
    if (!f.is_open()) { std::cout << "Error with opening!"; return 0; }
    else {
        while (f >> data) {
            n = stoi(data);
            if (isPrimeNumber(n) == true) { it++; }
        }
        std::cout << "\nit: " << it;
    }
}
