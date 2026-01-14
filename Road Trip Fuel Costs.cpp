//Joshua Pettaway

#include <iostream>

using namespace std;

int main()
{
    const int size = 5;
    int cost[size];

    cout << "Costs: ";
    for (int index = 0; index < size; index++)
    {
        cin >> cost[index];
    }
    cout << endl;

    int max_cost = cost[0];
    for (int index = 0; index < size; index++)
    {
        if (cost[index] > max_cost)
            max_cost = cost[index];
    }

    cout << "Highest cost: " << max_cost << endl;

    return 0;
}


