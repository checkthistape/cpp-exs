#include <iostream>
#include <vector>

using namespace std;

class BitConvert 
{
public:
    int number;
    int eig = 0;
    
    int result[9];
    int binary[10]={0,0,0,0,0,0,0,0,0,0};
    
    /*
    vector<int> result[9];
    vector<int> binary = {0,0,0,0,0,0,0,0,0,0};
    */
    
    int BitConverter(int number)
    {
        try 
        {
            result[0] = number;
            if (number > 255) {
                throw(number);
            }
            if (number < 0) {
                throw "Lower than 0";
            }
            binary[0] = 0;

            for (int x = 1; x <= 8; x++)
            {
                result[x] = result[eig] / 2;
                binary[x - 1] = result[eig] % 2;

                eig++;
                //cout << binary[eig];

            }
            cout << "binary just: ";
                for (int i = 7; i >= 0; i--)
                {
                    cout << binary[i];
                }

            cout << endl;
            
            cout << "binary left: ";
                for (int i = 7; i >= 0; i--)
                {
                    binary[i] = binary[i-1];
                    cout << binary[i];
                }
            
            cout << endl;

            cout << "binary right: ";
                for (int i = 7; i >= 0; i--)
                {
                     binary[i-1] = binary[i];
                     cout << binary[i];
                }
            
            return 0;
        }
        catch(int number)
        {
            cout << "Your decimal number is bigger than 255, please read the rules and try again" << endl;
        }
        catch (...) 
        {
            cout << "Your decimal number is lower than 0, please read the rules and try again" << endl;
        }
        
        
    }

private:
};


int main()
{
    int number;
    cin >> number;

    BitConvert obj;
    obj.BitConverter(number);

    return 0;


}
