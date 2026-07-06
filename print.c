#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string input = get_string("Input: ");
    printf("%c%c%c%c\n", input[0], input[1], input[2], input[3]);
    
    return 0;
}
