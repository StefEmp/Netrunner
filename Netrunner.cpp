#include <iostream>

void PrintIntroduction()
{
    //Game welcome message
    std::cout  << "______________________________________________________________________________________________________________________\n\n\n";
    std::cout  << "Welcome to Netrunner - A Digital Revolution\n";
    std::cout  << "______________________________________________________________________________________________________________________\n\n\n";
    std::cout  << "You exist between the lines of reality and cyberspace a blemish on the corporate world around you.\n\n"; 
    std::cout  << "It's time to wrench back humanity from the clutches of the corporations and bring them to their knees...\n\n";
    std::cout  << "To do this, you will need to hack into the megacorp mainframe, using the correct codes to destroy them once and for all!\n\n\n";

}
void PlayGame()
{

//declare our 3 number code
    const int CodeA = 4;
    const int CodeB = 3;
    const int CodeC = 2;


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
            std::cout << "\nNice hacking my friend, your one step closer to destroying the corporations for good!\n";
        }
    else
    {
        {
            std::cout << "\nYour hacking skills have failed you young padawan, have another go before it's too late and they catch on to you!\n";
        }
    }
    
}


int main()
{
    PrintIntroduction();
    PlayGame();
    return 0;
}