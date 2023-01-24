#include <iostream>
#include <vector>
#include <algorithm> 
#include <Windows.h>

int main()
{
	std::vector <long int> inp; // Main user input data vector

	 long int user_number; // Variable of number which user inputs
	 int index=0; // "Iterrator"

	 try // Making exceptions
	 {
		 std::cout << "		  Write your numbers in a range: 1 to 1 Billion (1 000 000 000) " << std::endl;
		 std::cout << "   .~~~~~~~~~~~.you need to have 0 at the end of your numbers line (last element).~~~~~~~~~~. " << std::endl << std::endl;

		 while (true) { // Infinity loop which asking for user input number

			 std::cin >> user_number; // User input
			 if (user_number == 0) { break; }
			 if (user_number > 1000000000) { throw 1; break; } // Exception 1
			 if (user_number < 1) { throw 0; break; } // Exception 2

			 inp.push_back(user_number); // Data to vector
			 index++; 
		 }
		
		 std::vector<long int> data_copy = inp; // Copying data vector
		 std::cout << std::endl << std::endl;

		 //	.~~~~~~~~~.Task 1.~~~~~~~~~.
		 int vecsize = inp.size(); // Variable which contains size of vector (quantity of numbers in vector)
		 std::cout << "Size: " << vecsize << std::endl; 
		 std::cout << std::endl;

		 //	.~~~~~~~~~.Task 2.~~~~~~~~~.
		 sort(data_copy.begin(), data_copy.end()); // Default vector sort
		 std::cout << "First 5 numbers: ";
		 for (int i = 0; i < 5; i++) // Printing only five first numbers
		 {
			 std::cout << data_copy.at(i) << " ";
		 }
		 std::cout << std::endl << std::endl;

		 // .~~~~~~~~~.Task 3.~~~~~~~~~.
		 reverse(data_copy.begin(), data_copy.end()); // Reversing vector for further numbers printing in ascending order 

		 std::cout << "Last 10 numbers: ";
		 for (int i = 9; i>=0; i--) // Printing first=last elements of vector
		 {
			 std::cout << data_copy.at(i) << " ";
		 }
		 reverse(data_copy.begin(), data_copy.end()); // Reverse again for correctly indexing
		 std::cout << std::endl << std::endl;

		 // .~~~~~~~~~.Task 4.~~~~~~~~~.
		int middle_numb = vecsize / 2; // Variable which contains half of vector's size, even in odd number vector elements situation int takes only integer (for example 15.5 - 15)
		int counter = 0; // Variable - "Iterrator" and condition to exit
		reverse(data_copy.begin(), data_copy.end());
		
		std::cout << "20 numbers beginning from middle : ";
		for (int i = middle_numb; i >= 0; i--)
		{
			std::cout << data_copy.at(i) << " ";
			if (counter > 20) {	 break;	}
			counter++;
		}
		reverse(data_copy.begin(), data_copy.end());
		std::cout << std::endl << std::endl;

		 return 0;
	 }
	 catch (int error)
	 {
		 if (error == 0){	std::cout << std::endl; std::cout << "ERROR " << error << ": your number is lower than 1, please try again" << std::endl;	}
		 if (error == 1){	std::cout << std::endl; std::cout << "ERROR " << error << ": your number is bigger than 1 000 000 / Billion / 10^9, please try again" << std::endl;	}
	 }
}
