#include <iostream>
#include <ctime>

int main()
{
    // srand() has to run once per program run
    std::srand(std::time(0));

    char prediction0[]{"a lot of kinds running in the backyard!"};
    char prediction1[]{"a lot of empty beer bootles on your work table."};
    char prediction2[]{"you Partying too much with kids wearing weird clothes."};
    char prediction3[]{"you running away from something really scary"};
    char prediction4[]{"clouds gathering in the sky and an army standing ready for war"};
    char prediction5[]{"dogs running around in a deserted empty city"};
    char prediction6[]{"a lot of cars stuck in a terrible traffic jam"};
    char prediction7[]{"you sitting in the dark typing lots of lines of code on your dirty computer"};
    char prediction8[]{"you yelling at your boss. And oh no! You get fired!"};
    char prediction9[]{"you laughing your lungs out. I've never seen this before."};

    bool end{false};

    const int max_length{15};
    char name[max_length]{};

    std::cout << "What's your name dear :" << std::endl;

    std::cin.getline(name, max_length); // Get input with spaces
    while (!end)
    {
        std::cout << "Oh dear " << name << ", I see ";

        size_t rand_num = static_cast<size_t>((std::rand() % 11));

        if (rand_num)
        {
            std::cout << prediction0 << std::endl;
        }else if()
        {
            std::cout << prediction1 << std::endl;
        }else if()
        {
            std::cout << prediction2 << std::endl;
        }else if()
        {
            std::cout << prediction0 << std::endl;
        }else if()
        {
            std::cout << prediction0 << std::endl;
        }else if()
        {
            std::cout << prediction0 << std::endl;
        }else if()
        {
            std::cout << prediction0 << std::endl;
        }else if()
        {
            std::cout << prediction0 << std::endl;
        }else if()
        {
            std::cout << prediction0 << std::endl;
        }else if()
        {
            std::cout << prediction0 << std::endl;
        }else
        {
            std::cout << "Thats all i have for you today dear. Best wishes" <<std::endl;
        }


        std::cout << "Do you want to try again ? (Y | N) : ";

        char go_on;
        std::cin >> go_on;

        end = (go_on == 'Y' || go_on == 'Y') ? false : true; 
    }
    std::cout << "Thats all i have for you today dear. Best wishes" <<std::endl;
    return (0);
}