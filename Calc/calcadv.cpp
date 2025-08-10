#include <iostream>
#include <string>

double calculation(std::string);

int main(void)
    {
        std::string equation = "NOP";
        std::cout << "Welcome to the calculator!\nType your equation, using + for add, - for subtract, * for multiply and / for divide.\n";
        std::cin >> equation;
        double result = calculation(equation);
        std::cout << result << std::endl;
        return 0;
    }



double calculation(std::string)
{
    enum operators
    {
        ADD = '+',
        SUB = '-',
        MUL = '*',
        DIV = '/'
    };

    


    double result;
    return result;
}