#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include <algorithm>

using namespace std;
// C:\Users\Public\Desktop

int main() {
	SetConsoleOutputCP(CP_UTF8);
	int meganumb = 18446744073709551615;
	string file1 = "locale.txt";
	string file2 = "przystanki.txt";
	string file3 = "save.txt";
	int x=0;

	string wow = string(1, '"');
	string spaces = "  ";

	fstream file(file1, ios::out | ios::in);
	string findable;
	
	if (file.is_open()) 
	{
		getline(file, findable); // "najblizsze przyjazdy" to variable findable
		int findable_length = findable.length();

		fstream przystanki(file2, ios::out | ios::in);
		string data; // variable for data from "przystanki.txt"


		if (przystanki.is_open())
		{
			//przystanki << "hey";
			przystanki << "hey";

			fstream save(file3, ios::out | ios::in);
			string saving;

			while (getline(przystanki, data)) // while we get data from "przystanki.txt"
			{
				auto findable_pos = data.find(findable); // finding a position of variable finding
				

				if (findable_pos >= 0 and findable_pos < meganumb)
				{
					data.replace(findable_pos, findable_length, "  ,  ");
				}

				if (x == 0) {
					save << "  ";
				}

				
				//przystanki << data << endl;
				save << data;

				cout << x++ << ": " << data << endl;
				if (save.is_open())
				{
					// if (space_pos >= 0 and space_pos < meganumb) { data.replace(space_pos, 2, "hey"); }
					
				}
				else {
					cout << "Error while opening: " << file3 << "..." << endl;
				}


				// if (save << data) { cout << endl << "Operation has been finished" << endl; }
				// else { cout << "Error" << endl; }
			}
			// przystanki.close();
			save.close();
			// przystanki.open(file2, ios::out | ios::in | ios::trunc);
			save.open(file3, ios::out | ios::in);

			
			
			if (przystanki.is_open() and save.is_open()) {
				getline(save, saving);
				int saving_length = saving.length();

				while (saving_length>0) {
					saving_length = saving_length - 1;
					auto space_pos = saving.find(spaces);
					if (space_pos >= 0 and space_pos < meganumb and space_pos!=string::npos)
					{
						saving.replace(space_pos, 2, wow);
					}
				}
				
				cout << "\n\nOperation is did\n" << endl;
				cout <<"Data is: " << saving;
			
				// przystanki << "[" << saving << "]";
			}
			else {
				cout << 'n';
			}
				/*
			{
				
				

				
				przystanki << data;
			}
			*/

			// auto data_length = length(data);

			// for(int x=0; x<)

				//if (save.is_open()) {  }
		}
		else {
			cout << "Error while opening: " << file2 << "..." << endl;
		}

	}
	else {
		cout << "Error while opening: " << file1 << "..." << endl;
	}
	return 0;
}




