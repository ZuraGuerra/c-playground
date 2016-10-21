#include <stdio.h>
int main()
{
  int character, acc;

  while ((character = getchar()) != EOF)
  {
    if (character == ' ')
    {
      while ((character = getchar()) == ' ');
      putchar(' ');
    }
    putchar(character);
  }
}
