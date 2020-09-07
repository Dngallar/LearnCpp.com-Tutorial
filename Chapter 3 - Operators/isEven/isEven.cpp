#include <iostream>

bool isEven(int x)
{
    return (x%2)==0;
}

int main()
{
    using namespace std;

    cout << "Enter a number: ";
    int x;
    cin >> x;
    bool even = isEven(x);
    cout << "The number " << x << " is ";
    if (even)
        cout << "even.\n";
    else
        cout << "odd. \n";

    return 0;
}
