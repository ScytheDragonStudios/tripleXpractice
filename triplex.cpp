#include <iostream>
#include <ctime>

void PrntIntroduction(int Difficulty){
 //Game start text
    int Input;
    std::cout << "::::::::::: :::::::::  ::::::::::: :::::::::  :::        ::::::::::      :::    ::: \n";
    std::cout << "    :+:     :+:    :+:     :+:     :+:    :+: :+:        :+:             :+:    :+: \n";
    std::cout << "    +:+     +:+    +:+     +:+     +:+    +:+ +:+        +:+              +:+  +:+  \n";
    std::cout << "    +#+     +#++:++#:      +#+     +#++:++#+  +#+        +#++:++#          +#++:+   \n";
    std::cout << "    +#+     +#+    +#+     +#+     +#+        +#+        +#+              +#+  +#+  \n";
    std::cout << "    #+#     #+#    #+#     #+#     #+#        #+#        #+#             #+#    #+# \n";
    std::cout << "    ###     ###    ### ########### ###        ########## ##########      ###    ### \n \n";
    std::cout << "Press Enter to Start";
    std::cin >> Input;
    std::cout << "\nYou are R1PP3RJ4<K, a legendary hacker from the Dark Web . . .\n";
    std::cout << "You've been hired by [REDACTED] to steal from a new game company . . .\n";
    std::cout << "You start in a Level " << Difficulty;
    std::cout << " server room. . .\n";
    std::cout << "Figure out the secret passcode to continue . . .\n \n";
}

bool PlayGame(int Difficulty) {
    
    PrntIntroduction(Difficulty);

    //var for num
    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    //Print sum and product
    std::cout << "*There are 3 numbers in the code\n";
    std::cout << "\n *The 3 numbers add up to: " << CodeSum;
    std::cout << "\n *The 3 numbers multiplied will equal: " << CodeProduct;
    std::cout << "\n *Space your answers.  Ex: 1 2 3 \n";

    
    //Store Player input
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    std::cout << "The number you put is: " << GuessA << GuessB << GuessC;

    //Check statement
    if(GuessSum == CodeSum && GuessProduct == CodeProduct) {

        std::cout << "\n \n That's one server down...\n";
        std::cout << "Time for the next one. . .\n";
        return true;
    } else {
        std::cout << "\n \n There firewall is stronger than you first thought. . .\n";
        return false;
    }
}

int main() 
{
   srand(time(NULL)); //creates random number sequences based on computer time

    int LevelDifficulty = 1;
    int const MaxDifficulty = 5;

    while (LevelDifficulty <= MaxDifficulty) //Loop till all levels completed
    {
        bool bLevelCompleted = PlayGame(LevelDifficulty);
        std::cin.clear(); //delete error
        std::cin.ignore(); //clear buffer

        if (bLevelCompleted)
        {
            ++LevelDifficulty;
        }
        
    }
    std::cout << "Your hack was successful. . .\n";
    std::cout << "The data was stolen and sold. . .\n";
    std::cout << "Not bad, Black Hat";

    return 0;
}