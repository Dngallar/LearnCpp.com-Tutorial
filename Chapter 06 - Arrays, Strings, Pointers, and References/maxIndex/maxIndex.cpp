#include <iostream>

int main()
{
    const int numStudents(5);
    int scores[numStudents] = { 84, 92, 76, 81, 56 };
    int maxIndex = 0;
    for (int student = 0; student < numStudents; ++student)
        if (scores[student] > scores[maxIndex])
            maxIndex = student;

    std::cout << "The best score was " << scores[maxIndex] << '\n';

    return 0;
}
