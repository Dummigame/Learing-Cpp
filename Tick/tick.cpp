#include <unistd.h>
#include <cstdio>
#include <iostream>

int ticker (bool &ticker_enabled, int &tick, int &uticktime);

/*
_____________________________________________________________

START OF EXEC
_____________________________________________________________
*/

int main(void)
{
    bool ticker_enabled = 1;
    int tick = 0;
    int uticktime = 16667;
    int i = 1;
    std::cout << "Ticks:\n";
    std::cin >> i;

    std::cout << "Rate in microseconds:\n";
    std::cin >> uticktime;

    while (tick<i)
    {
    ticker(ticker_enabled, tick, uticktime);
    }
    return 0;
}

/*
_____________________________________________________________

END OF EXEC
_____________________________________________________________
*/


int ticker (bool &ticker_enabled, int &tick, int &uticktime)
{
    if(ticker_enabled)
    {
        ++tick;
        printf("Tick: %d \n", tick);
        usleep(uticktime); //Time between ticks in uS (Microseconds)
    }
    return tick;
}