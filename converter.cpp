#include <iostream>
#include <vector>
using namespace std;

class BitConvert
{
public:
    int number;
    int iter = 0;

    vector<int> result = {0,0,0,0,0,0,0,0,0};
    vector<int> binary = {0,0,0,0,0,0,0,0,0,0}; 
    
    int BitConverter(int number)
    {
        try //Making exceptions
        {
            result.at(0) = number;
            if (number > 255) {
                throw(number);
            }
            if (number < 0) {
                throw "Lower than 0";
            }
            binary.at(0) = 0;

            for (int x = 1; x <= 8; x++) // Converting to Binary non-reversed
            {
                result.at(x) = result.at(iter) / 2;
                binary.at(x) = result.at(iter) % 2;
                iter++;
                

            }
            cout << "binary just: ";
            for (int i = 8; i > 0; i--) // Printing in reverse
            {
                cout << binary.at(i);
            }

            cout << endl;
            
            
            cout << "binary right: "; // Bit moving to one right //WORKING!!!
            for (int i = 1; i < 9; i++)
            {
                binary.at(i) = binary.at(i+1);
                
            }
            for (int i = 8; i > 0; i--) //Printhing after right move in reverse 
            {
                cout << binary.at(i);
            }

            cout << endl;

            cout << "binary left: "; // Bit moving to one left and printing in reverse
            for (int i = 8; i >0; i--)
            {
                binary.at(i) = binary.at(i - 1);
                cout << binary.at(i);
            }

            cout << endl;
            return 0;
        }

        catch (int number)
        {
            cout << endl;
            cout << "Your decimal number is bigger than 255, please read the rules and try again" << endl;
        }
        catch (...)
        {
            cout << endl;
            cout << "Your decimal number is lower than 0, please read the rules and try again" << endl;
        }
    }

private:
};

int main()
{
    int number;
    cout << "enter your decimal number (0-255): ";
    cin >> number;

    BitConvert obj;
    obj.BitConverter(number);

    return 0;
}
