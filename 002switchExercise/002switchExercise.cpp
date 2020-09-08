/* #include <iostream>
#include <string>

std::string name;
int age;
int choice;


int main()
{
    std::cout << "Please type your full name:\n";
    std::getline(std::std::cin, name);
    std::cout << "Please type your age:\n";
    std::cin >> age;
    std::cout << "Please pick a number from from the list:\n";
    std::cout << "1 - Tell me your name"

} */

/*

#include <iostream>
#include <string>

int main() {
        int option = 0;
        do {
            std::cout << "1: show something" << std::endl;
            std::cout << "2: Print my name" << std::endl;
            std::cout << "3: Hey, what's up??" << std::endl;
            std::cout << "4: show something" << std::endl;
            std::cout << "Choose an option: (1-4) " << std::endl;
            std::cin >> option;

            switch (option) {
            case 1:
                std::cout << "1: show something \n";
                break;
            case 2:
                std::cout << "Ylenia" << std::endl;
                break;
            case 3:
                std::cout << "What's up" << std::endl;
            case 4:
                std::cout << "Exit program," << std::endl;
                break;
            default:
                std::cout << "You entered a wrong number " << std::endl;
                break;
            }
        } while (option < 4 && option > 0);

        return 0;
} */

/*
#include <iostream>
#include <string>

int main() {
    int option = 0;

    for (int i=0; i < 5; i++) { // i = i + 1; // i--; i = i-1;
    do {
        std::cout << "1: show something" << std::endl;
        std::cout << "2: Print my name" << std::endl;
        std::cout << "3: Hey, what's up??" << std::endl;
        std::cout << "4: show something" << std::endl;
        std::cout << "Choose an option: (1-4) " << std::endl;
        std::cin >> option;

        switch (option) {
        case 1:
            std::cout << "1: show something \n";
            break;
        case 2:
            std::cout << "Ylenia" << std::endl;
            break;
        case 3:
            std::cout << "What's up" << std::endl;
        case 4:
            std::cout << "Exit program," << std::endl;
            break;
        default:
            std::cout << "You entered a wrong number " << std::endl;
            break;
        }

        std::cout << std::endl;
        std::cout << " The i value is :" << i << std::endl;
    } 

    return 0;
} */


#include <iostream>
#include <string>

int main() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) { //nested loop
            std::cout << "i= " << i << std::endl;
            std::wcout << "J = " << j << std::endl;


        }
    }
}

/*
    int option = 0;

    for (int i = 0; i < 5; i++) { // i = i + 1; // i--; i = i-1;

        do {
            std::cout << "1: show something" << std::endl;
            std::cout << "2: Print my name" << std::endl;
            std::cout << "3: Hey, what's up??" << std::endl;
            std::cout << "4: show something" << std::endl;
            std::cout << "Choose an option: (1-4) " << std::endl;
            std::cin >> option;

            switch (option) {
            case 1:
                std::cout << "1: show something \n";
                break;
            case 2:
                std::cout << "Ylenia" << std::endl;
                break;
            case 3:
                std::cout << "What's up" << std::endl;
            case 4:
                std::cout << "Exit program," << std::endl;
                break;
            default:
                std::cout << "You entered a wrong number " << std::endl;
                break;
            }

            std::cout << std::endl;
            std::cout << " The i value is :" << i << std::endl;
        }

        return 0;
    } 
    */