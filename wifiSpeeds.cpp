#include <iostream>

using namespace std;

int main()
{
    double speed1, speed2, speed3;

    cout << "Enter wifi speeds over the last 3 classes:" << endl;
    cin >> speed1 >> speed2 >> speed3;

    if (speed1 < 0 || speed2 < 0 || speed3 < 0)
    {
        cout << "Please enter a valid input." << endl;
    }

    else if (speed1 < speed2 && speed2 < speed3)
    {
        cout << "The wifi is getting faster!" << endl;
    }

    else if (speed1 > speed2 && speed2 > speed3)
    {
        cout << "The wifi is getting slower!" << endl;
    }

    else 
    {
        cout << "The wifi speed is changing unpredictably." << endl;
    }

    return 0;
}