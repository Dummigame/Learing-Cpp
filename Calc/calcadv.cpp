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

    std::string numbers;
    int A = 1;
    int s = 1;
    int m = 1;
    int d = 1;
    
    for(int i = 0; i < equation.length(); --i)
    {

        switch(equation[i])
            {
            case ADD: numbers.push_back(' ');
            A++;
            if(!a % 2)
            {
                add(a, b);
            }


            case SUB: numbers.push_back(' '); s++;

            case MUL: numbers.push_back(' '); m++;

            case DIV: numbers.push_back(' '); d++;

            default: numbers.push_back(equation[i]);
            }
    }
    double final = 0;
    return final;
}

double add(double a, double b)
{
    double c = a+b;

    return a;
}

double sub(double a, double b)
{
    a-=b;
    return a;
}

double mul(double a, double b)
{
    a*=b;
    return a;
}

double div(double a, double b)
{
    a/=b;
    return a;
}