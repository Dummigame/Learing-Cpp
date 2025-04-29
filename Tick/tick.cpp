#include <string>
#include <stdlib.h>
#include <unistd.h>
#include <iostream>

int ticker (bool &run, int &tick, int &uticktime);

/*
_____________________________________________________________

START OF EXEC
_____________________________________________________________
*/

int main ()
{
    bool run = 1;
    int tick = 1;
    int uticktime = 16667;
    while (tick<120)
    {
    ticker(run, tick, uticktime);
    }
}

/*
_____________________________________________________________

END OF EXEC
_____________________________________________________________
*/


int ticker (bool &run, int &tick, int &uticktime)
{

    if(run != 0)
    {
        tick+=1;
        std::cout << "Tick: " << tick << "\n";
        usleep(uticktime); //Time between ticks in uS (Microseconds)
    }
    return tick;
}