#include <stdio.h>
#include <conio.h>

int main()
{
    int a;
    while (a != EOF && a != '.') 
    {
        a = getchar();
        if (a == '?') 
        {
            putchar('!');
            continue;
        }
        putchar(a);
    }
}