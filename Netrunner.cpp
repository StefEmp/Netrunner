#include <iostream>
#include <ctime> // add time
void PrintIntroduction(int Difficulty)
{
    //Game welcome message
    std::cout  << "______________________________________________________________________________________________________________________\n\n\n";
    std::cout  << "Welcome to Netrunner - A Digital Revolution\n";
    std::cout  << "______________________________________________________________________________________________________________________\n\n\n";
    std::cout  << "You exist between the lines of reality and cyberspace a blemish on the corporate world around you.\n\n"; 
    std::cout  << "It's time to wrench back humanity from the clutches of the corporations and bring them to their knees...\n\n";
    std::cout  << "To do this, you will need to hack into the megacorp mainframe, using the correct codes to destroy them once and for all!\n\n";
    std::cout  << "Your have reached a LEVEL " << Difficulty <<" server room\n\n\n";
}
bool PlayGame(int Difficulty)
{
PrintIntroduction(Difficulty);
//declare our 3 number code
    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;

    const int CodeSum = CodeA + CodeB + CodeC;

    const int CodeProduct = CodeA * CodeB * CodeC;

//print our sum and product to the terminal

  
    std::cout << "+ The code contains 3 numbers\n\n";
    std::cout << "+ The code will add up to: " << CodeSum << "\n\n";
    std::cout << "+ The codes multiplied by each other will equal: " << CodeProduct << "\n\n";
    std::cout  << "______________________________________________________________________________________________________________________\n\n";
    std::cout << "- Now input each number in turn:\n\n";

//setting up user guess and user input and store it
    int GuessA, GuessB, GuessC;
    
    std::cin >> GuessA >> GuessB >> GuessC;

   
    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

//if statements to say whether user has won or lost

    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
        {
            std::cout << "\n***Nice hacking my friend, your one step closer to destroying the corporations for good!***\n";
            return true;
        }
    else
    {
        {
            std::cout << "\n***Your hacking skills have failed you young padawan, have another go before it's too late and they catch on to you!***\n";
            return false;
        }
    }
    
}


int main()
{
    srand(time(NULL)); // creates a new random sequence based on the time of day

    int LevelDifficulty = 1;
    int const MaxDifficulty = 5;

    while (LevelDifficulty <= MaxDifficulty) // loop game until all levels are done
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear(); //clears errors
        std::cin.ignore(); // Discards the buffer

        if (bLevelComplete)
        {
            ++LevelDifficulty; // increase level difficulty
        }
        
    }
   std::cout << "\n***Well done Netrunner, the evil corporations have been toppled, you have saved humanity!***\n";
    return 0;
}