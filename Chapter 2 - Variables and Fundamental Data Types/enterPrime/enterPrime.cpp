#include <iostream>
 
int main()
{
    using namespace std;
 
    cout << "Enter a single digit integer: ";
    int x;
    cin >> x;
 
    // We start by assuming the user did not enter a prime number
    bool prime(false);
 
    // Then we test to see if they did
    if (x == 2)
        prime = true;
    else if (x == 3)
        prime = true;
    else if (x == 5)
        prime = true;
    else if (x == 7)
        prime = true;
 
    if (prime)
        cout << "The digit is prime" << endl;
    else
        cout << "The digit is not prime" << endl;
 
    return 0;
}