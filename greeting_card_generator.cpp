#include <iostream>
#include <cstdlib>
#include "greeting_card_generator.h"

void GreetingCardGenerator::start() {
    system("chcp 1251");
    system("cls");
    std::cout << "������ ����� ������ ��� �������. ��� ���������� �������� �������� Enter ����:\n";

    
    std::string greetingText;
    std::string inputLine;

    while (true) {
        std::getline(std::cin, inputLine);

       
        if (inputLine.empty()) {
            break;
        }

        
        greetingText += inputLine + "\n";
    }

    generateCard(greetingText);
}

void GreetingCardGenerator::generateCard(const std::string& greetingText) {
    
    const std::string resetColor = "\033[0m";
    const std::string textColor = "\033[1;33m";  
    const std::string bgColor = "\033[44m";  

    
    const std::string ornament = "*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*";

    // �������� ������
    system("clear");

    
    std::cout << bgColor << textColor << ornament << resetColor << "\n";
    std::cout << bgColor << textColor << "       � ����� �����!" << resetColor << "\n";
    std::cout << bgColor << textColor << ornament << resetColor << "\n\n";

    std::cout << bgColor << textColor << greetingText << resetColor << "\n\n";

    
    std::cout << bgColor << textColor << ornament << resetColor << "\n";
    std::cout << bgColor << textColor << "  ��������� �� �������� ������ ����!" << resetColor << "\n";
    std::cout << bgColor << textColor << ornament << resetColor << "\n";
}
