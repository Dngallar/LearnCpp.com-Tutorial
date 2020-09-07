#include <iostream>
#include <cstdlib>
#include <ctime>

int getRandomNumber()
{
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
    return static_cast<int>(rand() * fraction * (100) + 1);
}

int main()
{
    srand(static_cast<unsigned int>(time(0)));
    rand();

    while(1)
    {
        int number = getRandomNumber();
        std::cout << "Let's play a game. I'm thinking of a number.\nYou have 7 tries to guess what it is.\n\n";
        bool win = false;
        for(int i = 1; i <= 7; i++)
        {
            bool goodNum = false;
            int guess;

            while(!goodNum)
            {
                std::cout << "Guess #" << i << ": ";
                std::cin >> guess;
                if((guess >= 1) && (guess <= 100))
                    goodNum = true;
            }

            if(guess < number)
                std::cout << "Your guess is too low.\n\n";
            else if(guess > number)
                std::cout << "Your guess is too high.\n\n";
            else
            {
                win = true;
                break;
            }
        }

        if(win)
            std::cout << "Correct! You win!\n\n";
        else
            std::cout << "Sorry, you lose.  The correct number was " << number << "\n\n";

        char option;
        do
        {
            std::cout << "Would you like to play again (y/n)? ";
            std::cin >> option;
            std::cout << "\n";
        }
        while((option != 'y') && (option != 'n'));

        if(option == 'n')
            break;
    }

    std::cout << "Thank you for playing.\n";

    return 0;
}
