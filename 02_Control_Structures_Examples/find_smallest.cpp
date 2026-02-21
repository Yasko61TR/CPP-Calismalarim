#include <iostream>

using namespace std;

int main()
{

    int number1, number2, number3;

    cout << "Please enter a 1.number: " << endl;

    cin >> number1;

    cout << "Please enter a 2.number: " << endl;

    cin >> number2;

    cout << "Please enter a 3.number: " << endl;

    cin >> number3;

        int smallest_number=number1;


    if (smallest_number == number1)
    {
        if (smallest_number >= number2)
        {
            smallest_number = number2;
        }
        if (smallest_number >= number3)
        {
            smallest_number = number3;
        }
    }
    cout << "Smallest number: " << smallest_number << endl;

    return 0;
}