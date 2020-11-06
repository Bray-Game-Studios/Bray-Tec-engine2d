#include "Bray_Window.hpp"
#include "Bray_Sprites.hpp"
#include "commandLib.cpp"
#include <stdio.h>
#include <string>
#include <string.h>
#include <iostream>

using namespace std;

/*Command Parser is Not maintainable and needs work*/
void command() {
    string commandStr;
    std::cout << "\nEnter Command\n";
    std::cout << "\n> ";
    std::cin >> commandStr;
    /* Newproj */
    if (commandStr == "newProj") {
        std::cout << "\nEnter New Project name\n";
        std::cout << "\n> ";
        std::cin >> commandStr;

    
        new_project(commandStr);


    }
    command();
}

int main() {
 std::cout << "\nThe Bray Game Engine\n";


 command();
}