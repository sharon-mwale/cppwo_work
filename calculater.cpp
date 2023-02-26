#include <iostream>

int main(){
    int a, b;
    float c;
    char ope;
    std::cout << "Enter a value\n";
    std::cin >> a;
    std::cout << "Enter b value\n";
    std::cin >> b;
    std::cout << "Enter operation (+ - * / and %)";
    std::cin >> ope;
    if(ope == '+'){
        c = a + b;
        std::cout << c;
    }
    else if (ope == '-'){
        c = a - b;
        std::cout << c;
    }else if(ope == '*'){
        c = a * b;
        std::cout << c;
    }
    else if(ope == '/'){
        c = a / b;
        std::cout << c;
    }
    else if(ope == '%'){
        c = a % b;
        std::cout << c;
    }
    else{
        std::cout << "Enter wrong input\n";
    }
    return 0;
}