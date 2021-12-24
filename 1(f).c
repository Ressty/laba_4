#include <stdio.h>
#include <conio.h>

int main()
{
int a, a_prev=0;
    while (a != EOF) {
        a = getchar();
        if (a == '+' && a_prev=='+') {
            continue;
        }
        a_prev=a;
        putchar(a);
    }
}