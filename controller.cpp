#include <iostream>

int main(){
    int controller;
    std::cout << "Enter a number from 0 to 3 to move your char \n";
    std::cout << "0 to move up, 1 to move down, 2 to move left, 3 to move right\n";
    std::cin >> controller;

    if(controller == 0){
        std::cout << "Move up\n";
    }else if(controller == 1){
        std::cout << "move down\n";
    }else if(controller == 2){
        std::cout << "move left\n";
    }else if(controller == 3){
        std::cout << "move right\n";
    }else{
        std:: cout << "invaild input\n";
    }
    return 0;
}
