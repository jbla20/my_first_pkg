#include <iostream>
#include <string>
using namespace std;

int main()
{

    string name;
    cout << "What's your name?: ";
    cin >> name;
    cout << "Hello," << name << "!\n";

    int num1;
    int num2;
    int calcChoice;

    cout << "Insert two integers to calculate: ";
    cin >> num1 >> num2;

    cout << "which of the following calculations would you like (please state the number)?\n"
         << "1: Addition\n2: Subtraction\n3: Multiplication:\n4: Division\n\n";
    cin >> calcChoice;

    switch (calcChoice)
    {
    case 1:
        cout << "The addition of " << num1 << " and " << num2 << " equals: " << num1 + num2 << "\n";
        break;

    case 2:
        cout << "The subtraction of " << num1 << " and " << num2 << " equals: " << num1 - num2 << "\n";
        break;

    case 3:
        cout << "The multiplication of " << num1 << " and " << num2 << " equals: " << num1 * num2 << "\n";
        break;

    case 4:
        cout << "The division of " << num1 << " and " << num2 << " equals: " << num1 / num2 << "\n";
        break;

    default:
        cout << "The input did not follow the requirements.";
        break;
    }

    return 0;
}