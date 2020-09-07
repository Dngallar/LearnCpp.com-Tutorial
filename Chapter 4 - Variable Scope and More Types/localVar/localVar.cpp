#include <iostream>

int main ()
{
    using namespace std;
    cout << "Enter an integer: ";
    int x;
    cin >> x;

    cout << "Enter a larger integer: ";
    int y;
    cin >> y;

    if(x > y)
    {
        cout << "Swapping the values\n";
        int temp = x;
        x = y;
        y = temp;
    }

    cout << "The smaller value is " << x << "\n";
    cout << "The larger value is " << y << "\n";

    return 0;

}
