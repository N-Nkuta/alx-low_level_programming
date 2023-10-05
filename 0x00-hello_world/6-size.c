#include <stdio.h>

/**
 * main - a program to tell your computer the bit size
 *
 * Return: 0 whenever successful
 */

int main(void)
{
        char a;
        int b;
        long int c;
        long long int d;
        float e;

        printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
        printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(b));
        printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
        printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
        printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(e));
        return (0);
}
