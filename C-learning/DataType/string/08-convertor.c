#include <stdio.h>
int main()
{
  char input[10];
  int num;
    
  printf("Enter a number: ");
  gets(input);
  num = atoi(input);

  return 0;
}