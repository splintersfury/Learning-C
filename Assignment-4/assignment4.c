#include <stdio.h>
#define PI 3.14

int main(void)
{
  float radius;

  //get user's input and store 
  printf("Enter the radius of your circle: ");
  scanf("%f", &radius);

  //initialise result, PI * R * R
  float area;
  area = PI * (radius * radius);

  printf("The area of your circle is: %f", area);
  return 0;
}