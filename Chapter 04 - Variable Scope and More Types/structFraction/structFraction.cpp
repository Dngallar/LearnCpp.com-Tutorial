#include <iostream>

struct Fraction
{
    int numerator;
    int denominator;
};

void multiply(Fraction f1, Fraction f2)
{
    int numerator = f1.numerator*f2.numerator;
    int denominator = f1.denominator*f2.denominator;

    std::cout << "The multiplication is: " << static_cast<double>(numerator)/denominator << "\n";
}

int main()
{
    Fraction f1;
    std::cout << "Enter the first numerator: ";
    std::cin >> f1.numerator;
    std::cout << "Enter the first denominator: ";
    std::cin >> f1.denominator;

    Fraction f2;
    std::cout << "Enter the second numerator: ";
    std::cin >> f2.numerator;
    std::cout << "Enter the second denominator: ";
    std::cin >> f2.denominator;

    multiply(f1, f2);

    return 0;
}
