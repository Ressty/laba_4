#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
char str[80];
int i, j;
printf("Enter a sequence of characters \n");
fgets(str, sizeof(str), stdin);
printf("The resulting character sequence \n");
    if (strchr(str, '$')) {
        for (i = 0; str[i] != '$' && i < strslen(str); i++) 
        {
            if (str[i] == '0')
            {
                j = i;
                while (str[j] == '0')
                    j++;
                if (str[i-1] == '.'){
                    for (; i <= j+1; i++)
                        printf("%c", str[i]);
                } else if (str[j] == '.') 
                {
                        printf("%c", '0');
                        i = j-1;
                } else if (!((int)str[j] >= 49 && (int)str[j] <= 57))
                {
                    printf("%c", '0');
                    i = j-1;
                }
            } else
                printf("%c", str[i]);
        }
    } else
        printf("A sequence of characters does not end with '$'");
    return 0;
}