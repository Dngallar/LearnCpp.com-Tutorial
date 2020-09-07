#include <iostream>
#include <string>

void selectionSort(std::string array[], int size)
{
    for (int startIndex = 0; startIndex < size; ++startIndex)
    {
        int smallestIndex = startIndex;

        for (int currentIndex = startIndex + 1; currentIndex < size; ++currentIndex)
        {
            if (array[currentIndex] < array[smallestIndex])
                smallestIndex = currentIndex;
        }
        std::swap(array[startIndex], array[smallestIndex]);
    }
}

int main()
{
    int numNames = 0;
	do
	{
		std::cout << "How many names do you want to enter? ";
		std::cin >> numNames;
	} while (numNames <= 1);

	std::string *names = new std::string[numNames];

    for(int i = 0; i < numNames; ++i)
    {
        std::cout << "Enter the name #" << i+1 <<": ";
        std::cin >> names[i];
    }

    selectionSort(names, numNames);

    std::cout << "\nNames in order:\n";
    for(int i = 0; i < numNames; ++i)
        std::cout << names[i] << '\n';

    delete[] names;
    names = nullptr;

	return 0;
}
