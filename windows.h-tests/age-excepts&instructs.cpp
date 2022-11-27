#include <iostream>
#include <Windows.h>

using namespace std;

class Class {
public:    
    void actions(int age)
    {
        cout << "Enter your age please: "; cin >> age;
        cout << "\t\n" << endl;

        _age = age;

        if (age < 120 && age>0) {
            cout << "Age: " << age << endl << endl;
            keyfunctions(age);
        }
        else if (age > 120) { throw 0; exception(age); }
        else if (age < 0) { throw 1; exception(age); }
        else if (age == 0) { throw 2; exception(age); }
        else { throw 3; exception(age); }

        
    }
    void exception(int age)
    {
        try
        {
            actions(age);
        }
        catch (int x)
        {
            cout << "\nError " <<x <<": You did something wrong, please check the error's number and solve the problem" << endl;
            keyfunctions(age);
        }
        catch (...)
        {
            cout << "\nError: You did something wrong, please check the error's number and solve the problem" << endl;
            keyfunctions(age);
        }
    }
    int keyfunctions(int age)
    {
        age = age;
        auto SPACE = VK_SPACE;
        auto BACKSPACE = VK_BACK;
        auto LSHIFT = VK_LSHIFT;
        auto RSHIFT = VK_RSHIFT;
        auto LCONTROL = VK_LCONTROL;
        auto RCONTROL = VK_RCONTROL;
        cout << "\nPress 'Space' to exit\nPress 'Backspace' to reload\nPress 'Shift' to watch error codes\nPress 'Ctrl' to clear a console window" << endl;
        while (true)
        {
            Sleep(500);
            if (GetAsyncKeyState(SPACE))
            {
                return 0;
            }
            if (GetAsyncKeyState(BACKSPACE)) 
            {
                cout << "\n" << endl;
                actions(age);
            }
            if (GetAsyncKeyState(LSHIFT) or GetAsyncKeyState(RSHIFT)) {
                errors();
                instructions();
            }
            if (GetAsyncKeyState(LCONTROL) or GetAsyncKeyState(RCONTROL)) {
                clear();
                instructions();
            }
        }
    }
    void errors() {
        cout << "\n\n~~~~~~~~~~~~~~~Error numbers~~~~~~~~~~~~~~~\n" << endl;
        cout << "Error 0: -- Your number (age) is more than 120" << endl;
        cout << "Error 1: -- Your number (age) is less than 0" << endl;
        cout << "Error 2: -- Your number (age) is equal 0" << endl;
        cout << "Error 3: -- Another problem" << endl;
    }
    void clear() {
        system("CLS");
    }
    void instructions() {
        cout << "\n\nPress 'Space' to exit\nPress 'Backspace' to reload\nPress 'Shift' to watch error codes\nPress 'Ctrl' to clear a console window" << endl;
    }
private:
    int _age;
};

int main()
{
    Class a;
    a.exception(0);
    return 1;
}
