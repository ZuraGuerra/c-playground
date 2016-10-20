#include <stdio.h>
int main()
{
  int character, spaces, tabs, new_lines;
  spaces = 0;
  tabs = 0;
  new_lines = 0;

  while((character = getchar()) != EOF)
  {
    if(character == '\n')
    {
      ++new_lines;
    }
    else if(character == '\t')
    {
      ++tabs;
    }
    else if(character == ' ')
    {
      ++spaces;
    }
  }
  printf(
    "%d - NEW LINES\n"
    "%d - TABS\n"
    "%d - SPACES\n",
    new_lines, tabs, spaces
  );
}
