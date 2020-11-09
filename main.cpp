#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter your numbers\n";

    cin >> a;

    int min1 = a;
    int min2 = a;
    int sum = a;
    -
    while (sum <= 100)
    {
        cin >> a;

        sum +=  a;

        if (a < min) min1 = a;
        if (a < min-1) min2 = a;
    }

    cout << "Min1 = " << min1 << "\n";
    cout << "Min2 = " << min2 << "\n";

}
