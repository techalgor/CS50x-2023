#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n=0;
    int p=0;
    int years=0;

    // TODO: Prompt for start size
    do
	{
		p = get_int("Start size: ");
	}
	while (p < 9);

    // TODO: Prompt for end size
    do
    {
      n = get_int("End size: ");
    }
    while (n < 9);

    // TODO: Calculate number of years until we reach threshold
    while (p < n)
    {
    p += ( p / 3) - ( p / 4);
    years ++ ;
    }

    // TODO: Print number of years
    printf("years: %i\n", years);
    return 0;
}

