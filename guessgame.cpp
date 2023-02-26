#include <iostream>
#include <cstdlib>
#include <ctime>


int main()
{   
    std::srand(std::time(0));
    char play ;
    std::cout << "do you want to play? enter y for yes or n for no ." <<std::endl;
    std::cin >>play;
    
    if (play == 'y', play == 'Y'){
        int randomnumber = rand() % 100 +1;
         std::cout << "Welcome to guess guess game. Please guess a number from 1 to 100!\n";
        int tries = 0;
    int guess;
    
    while (tries < 6)
    {   if ( guess != randomnumber){
        std::cout << "Guess!\n";
        std::cin >> guess;
        
        if(guess < randomnumber)
        {
            std::cout << "Woops - too low. Try Again\n";
        }else if(guess > randomnumber)
        {
            std::cout << "Too High. Try Again\n";
        }
        }
        tries ++;
    }
    if (tries <= 3)
    {
        std::cout << "You are pretty good!\n";
    }else if(tries > 3 ){
        std::cout << "Uhm... that took long\n";
    }
    std::cout << "Great job only took " << tries << " Attempts!\n";

    }
    else if(play == 'n', play == 'N'){
        std::cout << "Goodbye";
    }
    
    return 0 ;
}
