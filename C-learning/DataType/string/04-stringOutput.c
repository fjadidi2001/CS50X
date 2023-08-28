#include <stdio.h>
int main()
{
  char city[40];
  printf("Enter your favorite city: ");
  gets(city);
  // Note: for safety, use
  // fgets(city, 40, stdin);
  fputs(city, stdout);
  printf(" is a fun city.");

  return 0;
} 