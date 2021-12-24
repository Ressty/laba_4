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
  if ((int)str[i] >= 48 && (int)str[i] <= 57
  && ((((int)str[i+1] >= 48 && (int)str[i+1] <= 57) && ((int)str[i] < (int)str[i+1]))
  || ((int)str[i-1] >= 48 && (int)str[i-1] <= 57) && ((int)str[i] > (int)str[i-1])))
  printf("%c", str[i]);
  if (!((int)str[i] >= 48 && (int)str[i] <= 57))
  printf("%c", str[i]);
}
return 0;
}