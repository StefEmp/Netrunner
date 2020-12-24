#include <iostream>

int main()
{
    //Game welcome message
    std::cout  << "___________________________________________________________________________________________________________________________";
    std::cout <<std::endl;  
    std::cout  << "";
    std::cout <<std::endl;
    std::cout  << "Welcome to Netrunner - A Digital Revolution";
    std::cout <<std::endl;
    std::cout  << "___________________________________________________________________________________________________________________________";
    std::cout <<std::endl;  
    std::cout  << "" <<std::endl;
    std::cout  << "" <<std::endl;
    std::cout  << "You exist between the lines of reality and cyberspace a blemish on the corporate world around you."; 
    std::cout <<std::endl;
    std::cout  << "" <<std::endl;
    std::cout  << "This is your time, the time to wrench back humanity from the clutches of the corporations and bring them to their knees...";
    std::cout <<std::endl;
    std::cout  << "" <<std::endl;
    std::cout  << "To do this, you will need to hack into the megacorp mainframe, using the correct codes to destroy them once and for all!";
    std::cout <<std::endl;    
    std::cout  << "";

//declare our 3 number code
    const int CodeA = 4;
    const int CodeB = 3;
    const int CodeC = 2;


    const int CodeSum = CodeA + CodeB + CodeC;

    const int CodeProduct = CodeA * CodeB * CodeC;

//print our sum and product to the terminal
    std::cout <<std::endl;
    std::cout  << "" <<std::endl;
    std::cout << "+ The code contains 3 numbers" << std::endl;
    std::cout  << "" <<std::endl;
    std::cout << "+ The code will add up to: " << CodeSum <<std::endl;
    std::cout  << "" <<std::endl;
    std::cout << "+ The codes multiplied by each other with equal: " << CodeProduct <<std::endl;
    std::cout  << "" <<std::endl;
    std::cout << "-- Now input each number in turn: " << CodeProduct <<std::endl;
    std::cout  << "" <<std::endl;
    std::cout  << "" <<std::endl;

    int GuessA, GuessB, GuessC;
    
    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;
   
    return 0;
}