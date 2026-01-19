// NumberGuess.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
// for rand() and srand()
#include <ctime>
// for the time() function 

int main()
{
    srand(static_cast<unsigned int>(time(0)));

    // generate a random number between 1 and 100

    int secretNumber = rand() % 100 + 1;
    int guess = 0;

    std::cout << "I have chosen a number between 1 and 100." << std::endl;
    std::cout << "Can you guess what it is?" << std::endl;

    while (guess != secretNumber)
    {
        std::cout << "Enter your guess:";
        std::cin >> guess;

        if (guess > secretNumber)
        {
            std::cout << "Too high! try again." << std::endl;

        }
        else if ( guess < secretNumber) 
        {
            std::cout << "Too low! try again." << std::endl;
        }
        else 
        {
            std::cout << "Congratulations! You guessed my number!" << std::endl;

        }
    }
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
