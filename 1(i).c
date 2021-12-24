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
  if (str[i] == 't' && str[i+1] == 'h' && str[i+2] == 'e')
  i = i + 2;
  else
  printf("%c", str[i]);
}
return 0;
}