/*
* Program that converts and prints a dec number to a 8-bit bin number
*
*/

#include <iostream>

void convertPrintBin(int dec)
{
    int r7 = dec%2;
    dec /= 2;
    int r6 = dec%2;
    dec /= 2;
    int r5 = dec%2;
    dec /= 2;
    int r4 = dec%2;
    dec /= 2;
    int r3 = dec%2;
    dec /= 2;
    int r2 = dec%2;
    dec /= 2;
    int r1 = dec%2;
    dec /= 2;
    int r0 = dec%2;

    std::cout << r0 << r1 << r2 << r3 << " ";
    std::cout << r4 << r5 << r6 << r7 << "\n";
}

int main()
{
    std::cout << "Enter a decimal between 0 and 255: ";
    int dec;
    std::cin >> dec;
    std::cout << "The number " << dec << " in binary is ";
    convertPrintBin(dec);
    return 0;
}
