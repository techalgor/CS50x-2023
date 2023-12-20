#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Asks for a name
    string name = get_string("What's your name? ");

    // print
    printf("Hello, %s\n", name);
}
