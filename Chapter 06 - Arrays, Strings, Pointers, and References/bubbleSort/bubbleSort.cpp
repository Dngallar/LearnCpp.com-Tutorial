#include <utility>
#include <iostream>

int main()
{
    const int size{9};
    int array[size] = { 6, 3, 2, 9, 7, 1, 5, 4, 8 };

    for(int i = 0; i < size; ++i)
    {
        int endOfArray{size - i};
        bool swapped{false};

        for(int j = 0; j < size - 1; ++j)
        {
            if(array[j + 1] < array[j])
            {
                std::swap(array[j+1], array[j]);
                swapped = true;
            }
        }

        if (!swapped)
        {
            std::cout << "Early termination on iteration: " << ++i << '\n';
            break;
        }

    }

    for(int j = 0; j < size - 1; ++j)
        {
            std::cout << array[j] << ' ';
        }
    return 0;
}
