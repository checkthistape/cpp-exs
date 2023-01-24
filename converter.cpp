#include <iostream>
#include <vector>
using namespace std;

class BitConvert
{
public:
	int number;
	int iter = 0;

	vector<int> result = { 0,0,0,0,0,0,0,0,0 };
	vector<int> binary = { 0,0,0,0,0,0,0,0,0,0 };

	void BitRight()
	{
		cout << "binary right: "; // Bit moving to one right
		for (int i = 1; i < 9; i++) {	binary.at(i) = binary.at(i + 1);	}
		printing();
	}

	void BitLeft() 
	{
		cout << "binary left: "; // Bit moving to one left 
		for (int i = 1; i < 9; i++) {	binary.at(9-i) = binary.at(8-i);	}
		printing();
	}

	/*	all code works on non-reversed vector of numbers,
		for example: 11110000(2) = 15(10), but here code
		prints in reverse way for that view of number 00001111;			*/ 

	void printing() // Printing in reverse 
	{
		cout << endl;
		for (int i = 8; i >= 1; i--) {	cout << binary.at(i);	}
		cout << endl; cout << endl;
	}

	int BitConverter(int number)
	{
		try //Making exceptions
		{
			result.at(0) = number;

			if (number > 255) {	throw(number);	}
			if (number < 0) {	throw "Lower than 0";	}

			for (int x = 1; x <= 8; x++) // Converting to Binary 
			{
				result.at(x) = result.at(iter) / 2;
				binary.at(x) = result.at(iter) % 2;
				iter++;
			}
			cout << "\nconverted to binary:";
			printing();
			BitLeft();
			BitRight();
			return 0;
		}

		catch (int number)
		{
			cout << endl;
			cout << "your decimal number is bigger than 255, please read the rules and try again" << endl;
		}
		catch (...)
		{
			cout << endl;
			cout << "your decimal number is lower than 0, please read the rules and try again" << endl;
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
