#include <iostream>

struct Advertising
{
    int adsShown;
    double clickThroughRatePercentage;
    double averageEarningsPerClick;
};

void printAdvertising(Advertising ad)
{
    std::cout << "Number of ads shown: " << ad.adsShown << "\n";
    std::cout << "Click through rate: " << ad.clickThroughRatePercentage << "\n";
    std::cout << "Average earnings per click: $" << ad.averageEarningsPerClick << "\n";
    std::cout << "Total Earnings: $" << ad.adsShown*ad.clickThroughRatePercentage/100*ad.averageEarningsPerClick << "\n";
}

int main()
{
    Advertising ad;

    std::cout << "How many ads were shown today? ";
    std::cin >> ad.adsShown;

    std::cout << "What percentage of users clicked on the ads? ";
    std::cin >> ad.clickThroughRatePercentage;

    std::cout << "What was the average earnings per click? ";
    std::cin >> ad.averageEarningsPerClick;

    std::cout << "\n";
    printAdvertising(ad);

    return 0;
}
