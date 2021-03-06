#include <utility>
#include <iostream>

int main()
{
    const int size = 5;
    int array[size] = { 30, 50, 20, 10, 40 };

    for (int startIndex = 0; startIndex < size; ++startIndex)
    {
        int largestIndex = startIndex;

        for (int currentIndex = startIndex + 1; currentIndex < size; ++currentIndex)
        {
            if (array[currentIndex] > array[largestIndex])
                largestIndex = currentIndex;
        }
        std::swap(array[startIndex], array[largestIndex]);
    }

    for (int index = 0; index < size; ++index)
        std::cout << array[index] << ' ';

    return 0;
}
