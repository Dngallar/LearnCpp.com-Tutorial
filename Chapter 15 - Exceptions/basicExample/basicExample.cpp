#include <iostream>


int main()
{
    using namespace std;

    try
    {
        throw 4.5; // throw exception of type double
        cout << "This never prints" << endl;
    }
    catch(double dX) // handle exception of type double
    {
        cerr << "We caught a double of value: " << dX << endl;
    }

    return 0;
}
