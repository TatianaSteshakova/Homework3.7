#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "Rus");
    int sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        sum += i;
        cout << sum << endl;
    }
}