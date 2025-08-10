#include <cstring>
#include <iostream>
#include <string>

double calculation(std::string);

int main(void)
    {
        std::string equation = "NOP";
        std::cout << "Welcome to the calculator!\nType your equation, using + for add, - for subtract, * for multiply and / for divide.\n";
        std::getline(std::cin, equation);
        double result = calculation(equation);
        std::cout << result << std::endl;
        return 0;
    }



double calculation(std::string equation)
{
    enum operators
    {
        ADD = '+',
        SUB = '-',
        MUL = '*',
        DIV = '/'
    };
    
    for(int i = equation.length(); i > 0; --i)
    {
        
    }

    return final;
}

double add(double a, double b)
{
    a+=b;
    return a;
}

double sub(double a, double b)
{
    a-=b;
    return a;
}

double mul(double a, double b)
{
    a=a*b;
    return a;
}

double div(double a, double b)
{
    a=a/b;
    return a;
}