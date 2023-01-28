#include <math.h>
#include <stdio.h>
#define pi 3.14
void input_details(float *radius, float *height, float *length) 
{
  printf("enter details of the camel");
  scanf("%f %f %f", radius, height, length);
}
float find_weight(float radius, float height, float length) 
{
  float x;
  x = pi * radius * sqrt(height * length);
  return x;
}
void output(float radius, float length, float height, float weight) 
{
  printf("weight of camel having radius: %.1f length: %.1f and weight: %.1f is "
         "%.2f",
         radius, length, height, weight);
}
int main() 
{
  float length, height, radius;
  float weight;
  input_details(&radius, &height, &length);
  weight = find_weight(radius, height, length);
  output(radius, length, height, weight);
}