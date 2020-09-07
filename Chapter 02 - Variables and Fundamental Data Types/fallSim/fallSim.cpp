#include <iostream>
#include "constants.h"

double getInitialHeight()
{
	double h;
	std::cout << "Enter the initial height of the tower in meters: ";
	std::cin >> h;
	return h;
}

double getHeight(double initHeight, double sec)
{
	double gravity = myConstants::gravity;
	double actualHeight = initHeight - gravity*sec*sec/2;

	if (actualHeight < 0)
        return 0;
    else
        return actualHeight;
}

void printHeight(double height, int sec)
{
	std::cout << "At " << sec << " seconds, the ball is at height: ";
	std::cout << height << " meters\n";
}

int main()
{
	double initHeight = getInitialHeight();

	for(int sec = 0; sec < 6; sec++)
	{
		double height = getHeight(initHeight, sec);
		printHeight(height, sec);
	}
}
