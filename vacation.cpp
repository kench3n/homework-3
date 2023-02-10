#include <iostream>

using namespace std;

int main()
{
    char transport;
    double budget;
    double bus = 175.25, train = 240.66, plane = 350.93;

    cout << "What is your budget?" << endl;
    cin >> budget;

    if (budget < 0)
    {
        cout << "Please enter a valid input." << endl;
        return 0;
    }
    
    cout << "What mode of transportation would you like to take (B, T, or A)?" << endl;
    cin >> transport;



    if (transport == 'A')
    {
        if (budget < plane)
        {
            cout << "Sorry, this vacation is outside your budget." << endl;

        }
        else 
        {
            cout << "Yes, this vacation is within your budget!" << endl;
        }
    }
    else if (transport == 'B')
    {
        if (budget < bus)
        {
            cout << "Sorry, this vacation is outside your budget." << endl;
        }
        else
        {
            cout << "Yes, this vacation is within your budget!" << endl;
        }
    }
    else if (transport == 'T')
    {
        if (budget < train)
        {
            cout << "Sorry, this vacation is outside your budget." << endl;

        }
        else 
        {
            cout << "Yes, this vacation is within your budget!" << endl;
        }
    }
    else 
    {
        cout << "Please enter a valid input." << endl;
    }
}