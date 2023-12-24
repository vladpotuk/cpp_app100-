#ifndef GREETING_CARD_GENERATOR_H
#define GREETING_CARD_GENERATOR_H

#include <string>

class GreetingCardGenerator {
public:
    void start();

private:
    std::string getUserInput();
    void generateCard(const std::string& greetingText);
};

#endif 
