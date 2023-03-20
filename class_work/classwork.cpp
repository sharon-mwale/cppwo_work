#include <iostream>

int main()
{
    int age = 18;
    // (age != 18 && age > 19) ? std::cout << " Party\n" : std::cout << "Not allowed";

    // int i = 0;
    // while(i < 10){
    //     std::cout << " Party\n";
    //     i = i + 1;
    // }

    // for(int i = 0; i < 10; i++){
    //     std::cout << " Party " << i << std::endl;
    // }
    int i = 20;
    do{
        std::cout << " Party " << i << std::endl;
        i++;
    }while(i < 10);

}