#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
char str[80];
int i;
printf("Enter a sequence of characters \n");
fgets(str, sizeof(str), stdin);
printf("The resulting character sequence \n");
for (i = 0; i <= sizeof(str); i++) 
  {
    if (str[i] == '0' && (int)str[i-1] >= 49 && (int)str[i-1] <= 57)
    {
      while (str[i] == '0')
      {
        printf("%c", str[i]);
        i++;
      }
    }
  if (str[i] == '0' && (int)str[i+1] >= 49 && (int)str[i+1] <= 57)
  {
    i++;
  }
  if (str[i] == '0' && str[i+1] == '0')
  {
    while (str[i] == '0' && str[i+1] == '0')
    i++;
    if (!((int)str[i+1] >= 48 && (int)str[i+1] <= 57))
    printf("%c", '0');
  } 
  else 
  {
    printf("%c", str[i]);
  }
  }
return 0;
}