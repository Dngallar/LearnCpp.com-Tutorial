#include <iostream>
#include <string>
#include <iomanip>

int main()
{
    std::cout << "Enter your full name: ";
    std::string name;
    std::getline(std::cin, name);

    std::cout << "Enter your age: ";
    float age;
    std::cin >> age;

    float yearsPerLetter = age/name.length();
    std::cout << "You've lived " << yearsPerLetter;
    std::cout << " years for each letter in your name\n";

    return 0;
}
