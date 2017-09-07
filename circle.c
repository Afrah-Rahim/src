/*
 *
 *Description: The purpose of this function is to let the user
 *             input a radius value, which will first be checked.
 *             Then the program calculates the diameter, area, 
 *             circumference of the given circle.
 *
 *Author: Afrah Rahim
 *Date: Semptember 2016
 */

# include <stdio.h>
# define PI (3.1415926)
   int main () {
  float radius, diameter, circumference, area;

 printf (" Enter radius of circle: ");
 scanf ("%d", &radius);
  if ( radius >= 0)
  return 0;
  else
  return 1;
 
 diameter = 2 * radius;
 printf ("\n diameter: %f", diameter);

 circumference = 2 * PI * radius;
 printf (" \n circumference: %f", circumference);

 area = PI * radius * radius;
 printf (" \n area of circle: %f", area);

}
