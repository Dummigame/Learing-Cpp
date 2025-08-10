#include <iostream>
#include <cstdio>

int main(void)
{
int n = 0;

unsure:
std::cout << "Number of elements: \n";
scanf("%d", &n);

//Insta quit if you're stoopid
if(!n)
{
    printf("\nInvalid\n");
    return 1;
}

//Sanity questionnaire
if(n > 5)
{
    if (n > 50)
    {
        printf("You don't wanna do that. \n");
        return 2;
    }

    char confirmation;
    printf("You sure? y or n \n");
    std::cin >> confirmation;
    switch (confirmation)
    {
        case 'y': break;
        case 'Y': break;
        default: confirmation = 'n'; goto unsure;
    }
}

double sum = 0;
double elements[n];
int operation = 0;

std::cout << "Operation (0 for add, 1 for subtract): \n";
std::cin >> operation;


switch(operation)
{

case 0:
    for (int i = 0; i!=n; ++i)
    {
        printf("\nElement %d:\n", i+1);
        std::cin >> elements[i];
        sum += elements[i];
        std::cout << sum << "\n";
    }

    printf("\n");
    return 0;


case 1:
    for (int i = 0; i!=n; ++i)
    {
        printf("\nElement %d:\n", i+1);
        std::cin >> elements[i];
        sum -= elements[i];
        std::cout << sum << "\n";
    }

    printf("\n");
    return 0;

/*
//Code sucks, not fixing rn.

case 2:

    for (int i = 0; i!=n; ++i)
    {
        printf("\nElement %d:\n", i+1);
        std::cin >> elements[i];
        sum *= elements[i];
        printf("\n %d", sum);
    }

    printf("\n");
    return 0;


case 3:

    for (int i = 0; i!=n; ++i)
    {
        div0:
        printf("\nElement %d:\n", i+1);
        std::cin >> elements[i];
        if (!elements[i])
        {
            printf("Divide by 0, enter different number. \n");
            goto div0;
        }
        sum /= elements[i];
        printf("\n %d", sum);
    }

    printf("\n");
    return 0;
*/

default:

    printf("\nNOP\n");
    return 0;
}

}


/*
//old calculation
if(!operation)
{
    for (int i = 0; i!=n; ++i)
    {
        printf("\nElement %d:\n", i+1);
        std::cin >> elements[i];
        sum += elements[i];
        printf("\n %d", sum);
    }

    printf("\n");
    return 0;
}

else
{
    for (int i = 0; i!=n; ++i)
    {
        printf("\nElement %d:\n", i+1);
        std::cin >> elements[i];
        sum -= elements[i];
        printf("\n %d", sum);
    }

    printf("\n");
    return 0;
}*/