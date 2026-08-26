#include <iostream>
using namespace std;

int main()
{
    int target, num[4], found = 0;

    cout << "Set target: ";
    cin >> target;

    for(int i = 0; i < 4; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> num[i];
    }

    for(int i = 0, j = 1; i < 3 && j < 4; i++, j++)
    {
        if(num[i] + num[j] == target)
        {
            cout << "[" << i << "," << j << "]";
            found = 1;
        }
    }

    if(found == 0)
    {
        cout << "Not found";
    }

    return 0;
}
