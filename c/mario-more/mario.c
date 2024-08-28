#include <cs50.h>
#include <stdio.h>

void print_layer(int layer, int n);

int main()
{
    int n;
    do
    {
        n = get_int("Pyramids height: ");
    } 
    while (n > 8 || n < 1);

    for (int i = 1; i < n + 1; i++)
    {
        print_layer(i, n);
    }
}

void print_layer(int layer, int n)
{
    const char block = '#';
    // print left whitespaces
    for (int i = n - layer; i > 0; i--)
        printf(" ");
    // print left blocks
    for (int i = layer; i > 0; i--)
        printf("%c", block);
    // print gap in the middle of a pyramid
    printf("  ");
    // print right blocks
    for (int i = layer; i > 0; i--)
        printf("%c", block);
    // print end of line
    printf("\n");
}
