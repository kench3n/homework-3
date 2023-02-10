#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    double small = 4.99, medium = 5.99, large = 6.99;
    double smallToppings = 0.75, mediumToppings = 1.50, largeToppings = 2.25;
    char size;
    int toppingsNumber;
    double total;

    cout << "What size pizza would you like to order?" << endl;
    cin >> size;

    if (size == 'S')
    {
        cout << "How many toppings do you want?" << endl;
        cin >> toppingsNumber;

        if(toppingsNumber == 0)
        {
            total = small;
            cout << "Your total is $" << total << endl;
            return 0;
        }

        else if (toppingsNumber < 0)
        {
            cout << "Please enter a valid input." << endl;
            return 0;
        }
        else 
        {
            total = (toppingsNumber * smallToppings) + small;
            cout << "Your total is $" << total << endl;
            return 0;
        }
    }
    else if (size == 'M')
    { 
        cout << "How many toppings do you want?" << endl;
        cin >> toppingsNumber;

        if(toppingsNumber == 0)
        {
            total = medium;
            cout << "Your total is $" << total << endl;
        }

        else if(toppingsNumber < 0)
        {
            cout << "Please enter a valid input." << endl;
            return 0;
        }

        else 
        {
            total =  (mediumToppings * toppingsNumber) + medium;
            cout << "Your total is $" << total << endl;
        }
    }
    else if (size == 'L')
    { 
        cout << "How many toppings do you want?" << endl;
        cin >> toppingsNumber;

        if(toppingsNumber == 0)
        {
            total = large;
            cout << "Your total is $" << total << endl;
        }

        else if(toppingsNumber < 0)
        {
            cout << "Please enter a valid input." << endl;
            return 0;
        }

        else 
        {
            total =  (largeToppings * toppingsNumber) + large;
            cout << "Your total is $" << total << endl;
        }
    }
    else
    {
        cout << "Please enter a valid input." << endl;
    }
}