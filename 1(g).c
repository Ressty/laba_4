#include <string.h>
#include <stdio.h>
#include <conio.h>

int main()
{
char str[80];
int i;
printf("Enter a sequence of characters \n");
fgets(str, sizeof(str), stdin);
printf("The resulting character sequence \n");
for (i = 0; i <= sizeof(str); i++) 
{
  if (str[i] == '*' && str[i+1] == '*')
  {
    printf("%c", '+');
    i++;
  }
  else
  printf("%c", str[i]);
}
return 0;
}