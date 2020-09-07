#include <iostream>

int doubleNumber(int x){
    return 2*x;
}

int main(){
    using namespace std;
    cout << "Enter a number:" << endl;
    int number;
    cin >> number;
    cout << doubleNumber(number) << endl;
    return 0;
}
