#include <iostream>

using namespace std;

int main()
{
    int maxFlow = 250;
    int flow = 0;

    cout << "What is the flowrate of Boulder Creek?" << endl;
    cin >> flow;

    if (flow <= 0)
    {
        cout << "Please enter a valid input." << endl;
    }
    else if (flow <= maxFlow)
    {
        cout << "It is safe to go tubing. Have fun!" << endl;
    }
    else
    {
        cout << "The river is flowing too fast to go tubing." << endl;
    }

    return 0;
}