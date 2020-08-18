#include<stdio.h>

int main(void)
{
  float r;

  printf("Enter radius of sphere: ");
  scanf("%f", &r);

  float VolumeOfSphere = (4.0f/3.0f) * 3.14159 * r * r * r;
  printf("The volume of the sphere is %f", VolumeOfSphere);

  return 0;
}
