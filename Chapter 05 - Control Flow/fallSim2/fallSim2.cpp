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

	if (actualHeight < 0.0)
        return 0.0;
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
    int sec = 0;
    double height = getHeight(initHeight, sec);

	while(1)
	{
	    if(height == 0)
            break;
		height = getHeight(initHeight, sec);
		printHeight(height, sec);
		++sec;
	}
}
