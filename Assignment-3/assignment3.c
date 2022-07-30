#include <stdio.h>

int main(void)
{
  char first[20];
  char last[20];

  printf("Enter your first name: ");
  scanf("%20s", &first);
  printf("Enter your last name: ");
  scanf("%20s", &last); //%s is string

  printf("Hi %s %s!!\n", first, last);
  return 0;
}