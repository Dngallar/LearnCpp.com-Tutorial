#include <iostream>
#include <string>

int main()
{
    const std::string names[] {"Alex", "Betty", "Caroline", "Dave", "Emily", "Fred", "Greg", "Holly"};
    std::cout << "Enter a name: ";
    std::string nameUser;
    std::cin >> nameUser;
    bool found {false};

    for(std::string name : names)
    {
        if(name == nameUser)
        {
            found = true;
            break;
        }
    }

    if(found)
        std::cout << nameUser << " was found.\n";
    else
        std::cout << nameUser << " was not found.\n";

    return 0;
}
